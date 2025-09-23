#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;






int potpin1 = 0;// analog pin used to connect the potentiometer
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;
int potpin5 = 4;
int potpin6 = 5;
int button1 = 2;
int buttonState = 0;

int val1;// variable to read the value from the analog pin
int val2;
int val3;
int val4;
int val5;
int val6;

void setup() {
  servo1.attach(10); // attaches the servo on pin 9 to the servo object
  servo2.attach(9);
  servo3.attach(8);
  servo4.attach(7);
  servo5.attach(6);
  servo6.attach(5);
  pinMode(buttonState, INPUT_PULLUP);


}

void loop() {
  buttonState = digitalRead(button1);
  if (buttonState == HIGH);
  
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo1.write(val1);                  // sets the servo position according to the scaled value
  delay(0);                          // waits for the servo to get there
  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo2.write(val2);                  // sets the servo position according to the scaled value
  delay(1000); 
  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val3, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo3.write(val3);                  // sets the servo position according to the scaled value
  delay(1000); 
  val4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023)
  val4 = map(val4, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo4.write(val4);                  // sets the servo position according to the scaled value
  delay(1000); 
  val5 = analogRead(potpin5);            // reads the value of the potentiometer (value between 0 and 1023)
  val5 = map(val5, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo5.write(val5);                  // sets the servo position according to the scaled value
  delay(1000); 
  val6 = analogRead(potpin6);            // reads the value of the potentiometer (value between 0 and 1023)
  val6 = map(val6, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo6.write(val6);                  // sets the servo position according to the scaled value
  delay(1000); 