
#include <Servo.h>

Servo servo_9;

Servo servo_10;

void setup()
{
  servo_9.attach(9);

  servo_10.attach(10);

}

void loop()
{
  servo_9.write(100);
  delay(1000); 
  servo_9.write(150);
  servo_9.write(100);
  servo_10.write(100);
  delay(1000); 
  servo_10.write(150);
  servo_10.write(100);
}
