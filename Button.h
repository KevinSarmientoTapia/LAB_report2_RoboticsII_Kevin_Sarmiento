// Header file for Button class

// To define the Button class:
#ifndef BUTTON_H
#define BUTTON_H
#include <Arduino.h> //We include the Arduino library

class Button{ // To open a class called Button

private: // Place where variables and functions will be hidden from the user
int pin; // Variable for the pin
int state; // Variable for the state of the button

public: // Place where variables, functions and methods will be open for the user to use
Button(){};//default constructor
Button(int pin);//constructor 
void beging();//inizialize the pin
int read();//reads pin value
};
#endif