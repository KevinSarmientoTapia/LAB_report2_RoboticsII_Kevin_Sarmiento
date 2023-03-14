/*
 PB class

 The program's goal is to create a Push button class (header file + CPP file) to read the value of its state.

 The main theme is the use of Header file and CPP file to create a class.
*/
#include "Button.h" // Includes the library segment.h, wich contains the methods and functions we will use.
Button PB(2); // We create an object using the Button library called "PB" and we set its pin.
void setup() { 
  PB.beging(); // We initialize our PB object (Set pin as output).
  Serial.begin(9600); // to display values in the serial monitor.
}
void loop() { 
  int ButtonValue=PB.read(); // Variable "ButtonValue" will have the value of PB.read() (value of the button).
  Serial.println(ButtonValue); // displays the value off the button in the serial monitor.
}