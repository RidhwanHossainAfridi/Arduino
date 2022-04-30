void setup() {
 Serial.begin(9600);
 pinMode(D8, INPUT);
digitalWrite(D8, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool d = digitalRead(D8);
  Serial.println(d);
  delay(200);
}
