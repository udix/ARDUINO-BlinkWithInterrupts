
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN and digital pin 1 as outputs.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(1, OUTPUT);
  // initialize digital pin 4 as an INPUT_PULLUP
  pinMode(4, INPUT_PULLUP);
  // attach interruption to pin 4, and when it change buttonPressed function will be called
  attachInterrupt(digitalPinToInterrupt(4), buttonPressed, CHANGE);
}

// the loop function runs over and over again forever
void loop() {
  delay(500);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(1,LOW);
}

void buttonPressed() {
    digitalWrite(LED_BUILTIN, digitalRead(1));
}