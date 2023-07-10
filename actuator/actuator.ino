#include <Servo.h>

Servo actuator;
int delay_time = 90 * 1000;

void setup() {
  // put your setup code here, to run once:
  actuator.attach(A0);
  pinMode(A3, INPUT_PULLDOWN);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!digitalRead(A3));

  actuator.writeMicroseconds(2000);
  delay(delay_time);
  actuator.writeMicroseconds(1000);
  delay(delay_time);
  actuator.writeMicroseconds(2000);
}
