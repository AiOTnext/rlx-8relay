#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "9d2424f141d547d7b7122a450d01ed49"; // the auth code that you got on your gmail
char ssid[] = "Ravi"; // username or ssid of your WI-FI
char pass[] = "7828ravi5050soni43"; // password of your Wi-Fi

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(D1,OUTPUT); //extend these to D8 if you are using a 8 pin relay 
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);

  digitalWrite(D1,LOW); // Make it low if you want everything to go off 
  digitalWrite(D2,LOW); // in case of a power cut
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  
  

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
