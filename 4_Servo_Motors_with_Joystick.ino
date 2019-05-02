#include <Servo.h>
  
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int joyX1 = 0;
int joyY1= 1;
int joyX2 = 2;
int joyY2= 3;
  
int servoVal;
int servoVal2;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}
  
void loop()
{
  
  servoVal = analogRead(joyX1);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);
 
  servoVal = analogRead(joyY1);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);

  servoVal2 = analogRead(joyX2);
  servoVal2 = map(servoVal2, 0, 1023, 0, 180);
  servo3.write(servoVal2);
 
  servoVal2 = analogRead(joyY2);
  servoVal2 = map(servoVal2, 0, 1023, 70, 180);
  servo4.write(servoVal2);
  delay(15);
}
