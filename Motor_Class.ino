/*
 Motor class.

 The program's goal is to create a motor class (header file + CPP file) that can control the movement of the motors of the robot car.

 The main theme is the creation of a header file and a CPP file to make the motor class
*/

#include "motor.h" // We include the library made for the motors of the car

//Pins for the motors:
int Pin=A0; // Pin for motor that will always be on.
int MotorA=7; // Motor A of the car connected to pin 7.
int MotorB=8;  // Motor B of the car connected to pin 8.
int PWMA=5; // PWMA (Pulse With Modulation A) connected to pin 5 .
int PWMB=6; // PWMB (Pulse With Modulation B) connected to pin 6.

motor Motor(Pin, MotorA, PWMA, MotorB, PWMB); //Object created using the motor library

int Speed=127; // Speed of the motors

void setup() {
Motor.begin(); // Initialize the Motor object (set pins as outputs) 
}

void loop() {
Motor.forward(Speed); // Move car fordward
delay(1000);
Motor.backward(Speed); // Move car backward
delay(1000);
Motor.left(Speed); // Move car to the left
delay(1000);
Motor.right(Speed); // Move car to the right
delay(1000);
Motor.forward_left(Speed); // Move car fordward while it moves to the left
delay(1000);
Motor.forward_right(Speed); // Move car fordward while it moves to the right
delay(1000);
Motor.Stop(); // Stops the car
delay(1000);
}
