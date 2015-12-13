#include "DHT1.h"

DHT1 DHT;

#define DHT11_PIN 2
char sensorID[] = "temp";
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Serial.println("dht22_test");
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)\tTime (us)");

 
}

void loop() {
  // put your main code here, to run repeatedly:
  int ret;
  float temp;
  
  //read sensor values
  ret = read_temp(&temp);
  if ( ret != DHTLIB_OK ) {
    delay(100);
    return;
    
   }
    delay(2000);
}


int read_temp(float *data)
{
      // READ DATA
    Serial.print("DHT11, \t");
    delay(1000);
    int ret = DHT.read22(DHT11_PIN);

    switch (ret)
    {
    case DHTLIB_OK:
        Serial.print("OK,\t");
        *data = (float)DHT.temperature;
        break;
    case DHTLIB_ERROR_CHECKSUM:
        Serial.print("Checksum error,\t");
        break;
    case DHTLIB_ERROR_TIMEOUT:
        Serial.print("Time out error,\t");
        break;
    default:
        Serial.print("Unknown error,\t");
        break;
    }
    
    // DISPLAY DATA
    Serial.print(DHT.humidity, 1);
    Serial.print(",\t");
    Serial.print(DHT.temperature, 1);
    Serial.print(",\t");
    Serial.println();
    return ret;
}
