// Header file for the segment class:

// We define the segment class:
#ifndef SEGMENT_H  
#define SEGMENT_H 
#include <Arduino.h> //We include the Arduino library

class segment{ // to open a class called "segment"

private: // Place where variables and functions will be hidden from the user
// Pins for the 7-segment 
int a;
int b;
int c;
int d;
int e;
int f;
int g;

public: // Place where variables, functions and methods will be open for the user to use
segment(){}; // Default Constructor
segment(int a, int b, int c, int d, int e, int f, int g); // Constructor and pins
void begin(); // Set pins as outputs
void zero(); // Print number 0 in 7 segment
void one(); // Print number 1 in 7 segment
void two(); // Print number 2 in 7 segment
void three(); // Print number 3 in 7 segment
void four(); // Print number 4 in 7 segment
void five(); // Print number 5 in 7 segment
void six(); // Print number 6 in 7 segment
void seven(); // Print number 7 in 7 segment
void eight(); // Print number 8 in 7 segment
void nine(); // Print number 9 in 7 segment

};
#endif