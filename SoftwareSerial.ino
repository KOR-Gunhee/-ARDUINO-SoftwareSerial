#include <SoftwareSerial.h>

SoftwareSerial RS232(10, 11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //시리얼 모니터

  RS232.begin(9600);
}

void loop() {

  RS232.write('a');
  delay(1000);
}
