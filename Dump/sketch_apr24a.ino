// CSE331.4 (Spring 2022)
// Group-2
// Code for Arduino Nano:

// Declaring pins of I/O:
//Input Pins:      Output Pins:
  int pin_I0 = 11; int O0 = 4;
  int pin_I1 = 10; int O1 = 5;
  int pin_I2 =  9; int O2 = 6;
  int pin_I3 =  8; int O3 = 3;

// Logical Operators of input:
  int I0 = 0;
  int I1 = 0;
  int I2 = 0;
  int I3 = 0;

void setup() {
  // Pin Mode for Input:   Pin Mode for Outut:   
   pinMode(pin_I0, INPUT); pinMode(O0, OUTPUT);
   pinMode(pin_I1, INPUT); pinMode(O1, OUTPUT);
   pinMode(pin_I2, INPUT); pinMode(O2, OUTPUT);
   pinMode(pin_I3, INPUT); pinMode(O3, OUTPUT);
}
void loop() {
  // Reading the input pins:
  I0 = digitalRead(pin_I0);
  I1 = digitalRead(pin_I1);
  I2 = digitalRead(pin_I2);
  I3 = digitalRead(pin_I3);
  if( (I0 == 0)&&(I1 == 0)&&(I2 == 0)&&(I3 == 0) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,1);
    digitalWrite(O2,0);
    digitalWrite(O3,1);
  }
  if( (I0 == 0)&&(I1 == 0)&&(I2 == 0)&&(I3 == 1) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,1);
    digitalWrite(O2,0);
    digitalWrite(O3,1);
  }
  if( (I0 == 0)&&(I1 == 0)&&(I2 == 1)&&(I3 == 0) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,0);
    digitalWrite(O3,1);
  }
  if( (I0 == 0)&&(I1 == 0)&&(I2 == 1)&&(I3 == 1) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,0);
    digitalWrite(O3,0);
  }
  if( (I0 == 0)&&(I1 == 1)&&(I2 == 0)&&(I3 == 1) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,0);
  }
  if( (I0 == 0)&&(I1 == 1)&&(I2 ==1)&&(I3 == 0) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,1);
    digitalWrite(O2,1);
    digitalWrite(O3,1);
  }
  if( (I0 == 0)&&(I1 == 1)&&(I2 == 1)&&(I3 == 1) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,0);
  }
  if( (I0 == 1)&&(I1 == 0)&&(I2 == 0)&&(I3 == 0) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,1);
  }
  if( (I0 == 1)&&(I1 == 0)&&(I2 == 0)&&(I3 == 1) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,0);
    digitalWrite(O2,0);
    digitalWrite(O3,0);
  }
  if( (I0 == 1)&&(I1 == 0)&&(I2 == 1)&&(I3 == 0) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,0);
  }
  if( (I0 == 1)&&(I1 == 0)&&(I2 == 1)&&(I3 == 1) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,1);
  }
  if( (I0 == 1)&&(I1 == 1)&&(I2 == 0)&&(I3 == 0) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,0);
    digitalWrite(O3,1);
  }
  if( (I0 == 1)&&(I1 == 1)&&(I2 == 0)&&(I3 == 1) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,1);
    digitalWrite(O2,1);
    digitalWrite(O3,0);
  }
  if( (I0 == 1)&&(I1 == 1)&&(I2 == 1)&&(I3 == 0) == true){
    digitalWrite(O0,0);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,1);
  }
  if( (I0 == 1)&&(I1 == 1)&&(I2 == 1)&&(I3 == 1) == true){
    digitalWrite(O0,1);
    digitalWrite(O1,0);
    digitalWrite(O2,1);
    digitalWrite(O3,1);
  }
}
