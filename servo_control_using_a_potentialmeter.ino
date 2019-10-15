#include <Servo.h> //Access of the servo library

Servo myservo; /*Creating an object servo to control the servo motor*/

int val; //This is the variable which reads the analog pin
int servoval; // servo output value

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9); //Output of the servo is pin 9
  pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0); /*This gets the value of the potentialmeter from the analog pin 1 -> The value lies between 0 and 1023*/
  servoval = map(val, 0, 1023, 0, 179); /*This enables the convertion  of the potentialmeter reading to an output in degrees
    of rotation of the servo*/
  myservo.write(servoval); //Takes the output degree and sets the servo in that position.
  delay(50);
}
