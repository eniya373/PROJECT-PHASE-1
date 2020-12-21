#define BLYNK_USE_DIRECT_CONNECT
#include <SoftwareSerial.h>
#include <BlynkSimpleSerialBLE.h>
char auth[] = "dIkUgJxJpYpxq7rmp7GyoPzs0_IvWwvg";
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}
void loop()
{
  Blynk.run();
}
