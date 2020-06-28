//***********************************************************
// Program for moving servo motor
//***********************************************************
#include <Servo.h> //Reading servo motor library
Servo myservo; //Create an object for the servo
int val; //Variable for storing servo angle



const int IN1 = 4;

const int IN2 = 7; 

const int EN1 = 5;

void setup()

{
  
myservo.attach(9); //Set digital pin 9 as the command pin for determining the servo angle

  
   pinMode(IN1,OUTPUT); 

   pinMode(IN2,OUTPUT); 
   pinMode(EN1,OUTPUT);
  
 
}


void loop()

{

  

   

    digitalWrite(IN1,HIGH);  // IN1 HIGH

    digitalWrite(IN2,LOW);  //  IN2 LOw

    digitalWrite(EN1,HIGH);  // Enable1 HIGH

    delay(10000);//wait for 10s

    //backward

    digitalWrite(IN1,LOW);  // IN1 Low

    digitalWrite(IN2,HIGH);  //IN2 HIGH

    digitalWrite(EN1,HIGH);  // Enable1 HIGH

    delay(3000);//wait for 3s

  
  
  
val = 0;
myservo.write(val); //Move the servo (0 degree)
delay(1500);
val = 90;
myservo.write(val); //Move the servo (90 degrees)
delay(1500);

}





