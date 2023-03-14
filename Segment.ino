/*
 7-segment Class
 
 The program's goal is to create a 7-segment class (header file + CPP file) to display different numbers in the 7-segment.
 
 The main theme is the use of Header file and CPP file to create the class.
*/
#include "segment.h" // Includes the library segment.h, wich contains the methods and functions we will use
segment Segment(2, 3, 4, 5, 6, 7, 8); // We create an object using the segment library called "Segment" and we set its pins
void setup() {
Segment.begin(); // To initialize our Segment object (set pins as outputs)
}
void loop() {
Segment.zero(); // segment displays number 0 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.one(); // segment displays number 1 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.two(); // segment displays number 2 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.three(); // segment displays number 3 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.four(); // segment displays number 4 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.five(); // segment displays number 5 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.six(); // segment displays number 6 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.seven(); // segment displays number 7 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.eight(); // segment displays number 8 in 7-segment
delay(500); // Waits 1/2 seconds
Segment.nine(); // segment displays number 9 in 7-segment
delay(500); // Waits 1/2 seconds
}