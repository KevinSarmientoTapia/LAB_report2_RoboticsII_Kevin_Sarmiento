// CPP file for the segment class:

#include "segment.h" // to include our Segment header file
  // Arrays for the programs
  int Zero[7]={1, 1, 1, 1, 1, 1, 0}; // To make the number 0.
  int One[7]={0, 1, 1, 0, 0, 0, 0}; // To make the number 1.
  int Two[7]={1, 1, 0, 1, 1, 0, 1}; // To make the number 2.
  int Three[7]={1, 1, 1, 1, 0, 0, 1}; // To make the number 3.
  int Four[7]={0, 1, 1, 0, 0, 1, 1}; // To make the number 4.
  int Five[7]={1, 0, 1, 1, 0, 1, 1}; // To make the number 5.
  int Six[7]={1, 0, 1, 1, 1, 1, 1}; // To make the number 6.
  int Seven[7]={1, 1, 1, 0, 0, 0, 0}; // To make the number 7.
  int Eight[7]={1, 1, 1, 1, 1, 1, 1}; // To make the number 8.
  int Nine[7]={1, 1, 1, 0, 0, 1, 1}; // To make the number 9. 
  
// Constructor  
segment::segment(int a, int b, int c, int d, int e, int f, int g){ 
 // In this constructor we use the variables created in private and we give them the value of the pins we will set the constructor
  this->a=a; 
  this->b=b;
  this->c=c;
  this->d=d;
  this->e=e;
  this->f=f;
  this->g=g;
}
  
void segment::begin(){ // Method "begin"
 // Set pins in constructor as outputs
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

  //We store the values of the pins already set as ouputs in an Array to use them in the foor loops below:
  int Pins[7]={a, b, c, d, e, f, g};

//Methode void zero():
void segment::zero(){  
//Display number 0, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "zero", it will turn them on or off to make the number 0
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Zero[x]);
  }
}

//Method void one():
void segment::one(){
//Display number 1, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "one", it will turn them on or off to make the number 1

  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], One[x]);
  }
}

//Function void two():
void segment::two(){
// Display number 2, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "two", it will turn them on or off to make the number 2
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Two[x]);
  }
}

//Function void three():
void segment::three(){
//Display number 3, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "three", it will turn them on or off to make the number 3
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Three[x]);
  }
}
//Function void four():
void segment::four(){
//Display number 4, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "four", it will turn them on or off to make the number 4
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Four[x]);
  }
}

//Function void five():
void segment::five(){
//Display number 5, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "five", it will turn them on or off to make the number 5
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Five[x]);
  }
}

//Function void six():
void segment::six(){
//Display number 6, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "six", it will turn them on or off to make the number 6
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Six[x]);
  }
}

//Function void seven():
void segment::seven(){
//Display number 7, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "seven", it will turn them on or off to make the number 7
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Seven[x]);
  }
}

//Function void eight():
void segment::eight(){
//Display number 8, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "eight", it will turn them on or off to make the number 8
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Eight[x]);
  }
}

//Function void nine():
void segment::nine(){
//Display number 9, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "nine", it will turn them on or off to make the number 9
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Nine[x]);
  }
}