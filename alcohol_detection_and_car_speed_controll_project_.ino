//hlw guys amit this side, welcome to my world #use and enjoy 

#include <Servo.h> //include the Servo library

Servo myservo1;  //create a servo object
Servo myservo2;  //create another servo object

int alcoholPin = A0; //analog pin for the MQ135 sensor
float alcoholPercentage; //variable to store alcohol percentage
int motorSpeed1 = 255; //initial motor speed for motor 1
int motorSpeed2 = 255; //initial motor speed for motor 2

void setup()
{
  myservo1.attach(9); //attach servo to pin 9
  myservo2.attach(10); //attach servo to pin 10
  Serial.begin(9600); //start serial communication
}

void loop()
{
  int alcoholValue = analogRead(alcoholPin); //read the analog value from MQ135 sensor
  alcoholPercentage = map(alcoholValue, 0, 1023, 0, 100); //convert analog value to percentage

  //Reduce motor speed based on alcohol percentage
  if (alcoholPercentage >= 5 && alcoholPercentage < 10)
  {
    motorSpeed1 = 100; //reduce motor speed
    motorSpeed2 = 100;
  }
  else if (alcoholPercentage >= 12)
  {
    motorSpeed1 = 50; //reduce motor speed 
    motorSpeed2 = 50;
  }

  else 
  {
    motorSpeed1 = 255; // full speed 
    motorSpeed2 = 255;
  }




  myservo1.write(motorSpeed1); //set motor 1 speed
  myservo2.write(motorSpeed2); //set motor 2 speed

  Serial.print("Alcohol Percentage: ");  // Serial monitor display part 
  Serial.print(alcoholPercentage);
  Serial.print("%, ");
  Serial.print("Motor Speed: ");
  Serial.print(motorSpeed1);
  Serial.print(", ");
  Serial.println(motorSpeed2);

  delay(1000); //wait for 1 second before reading again
}
