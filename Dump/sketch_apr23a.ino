bool pinI0 = 11;
bool pinI1 = 10;
bool pinI2 = 9;
bool pinI3 = 8;

bool O0 = 4;
bool O1 = 5;
bool O2 = 6;
bool O3 = 3;

bool I0 = 0;
bool I1 = 0;
bool I2 = 0;
bool I3 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(I0,INPUT);
  pinMode(I1,INPUT);
  pinMode(I2,INPUT);
  pinMode(I3,INPUT);

  pinMode(O0, OUTPUT);
  pinMode(O1, OUTPUT);
  pinMode(O2, OUTPUT);
  pinMode(O3, OUTPUT);
}

void loop() {
  I0 = digitalRead(pinI0);
  I1 = digitalRead(pinI1);
  I2 = digitalRead(pinI2);
  I3 = digitalRead(pinI3);
  Serial.println(I0);
  Serial.println(I1);
  Serial.println(I2);
  Serial.println(I3);
  delay(500);
  
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
