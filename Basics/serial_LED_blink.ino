void setup() {
  //Ridhwan Hossain Afridi
  //Arduino Code - 0001
  //Blinking an 8 bit serial LED array:

  // Initializing Pin 2 to 9 for output:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int i = 2;
  while (i <= 10) {
    if (i <= 9) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
      delay(500);
      i++;
    }
    else {
      i = 2;
    }
  }
}
