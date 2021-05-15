#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "7c9d873ab07c49cd8de99675f1dbff2d";

char ssid[] = "AndroidAP3125";
char pass[] = "3rdbencher3c";

  int relay1 = 16; //GPIO16 D0 pin 
  int relay2 = 5;  //GPIO5 D1 pin 
  int relay3 = 4;  //GPIO4 D2 pin 
  int relay4 = 0;  //GPIO0 D3 pin 

void setup()
{
  // Debug console
  Serial.begin(115200);

  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
