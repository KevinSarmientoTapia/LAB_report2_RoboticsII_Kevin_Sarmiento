// CPP file for Button class

#include "Button.h" // To include our Button header file
Button::Button(int pin){ // Declare pin an variables for the constructor
int state;
this->pin=pin;
this->state=state;
}
void Button::beging(){ // Set pin of the constructor
pinMode(pin, INPUT_PULLUP);
}
int Button::read(){ // Variable state gets the digital value of the button (1 or 0)
state=digitalRead(pin);
return state;
}