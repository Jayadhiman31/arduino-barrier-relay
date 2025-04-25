const int openRelayPin = 7;
const int closeRelayPin = 8;

void setup() {
  pinMode(openRelayPin, OUTPUT);
  pinMode(closeRelayPin, OUTPUT);
  digitalWrite(openRelayPin, LOW);
  digitalWrite(closeRelayPin, LOW);
}

void loop() {
  digitalWrite(openRelayPin, HIGH);
  delay(1000);
  digitalWrite(openRelayPin, LOW);

  delay(5000);

  digitalWrite(closeRelayPin, HIGH);
  delay(1000);
  digitalWrite(closeRelayPin, LOW);

  delay(10000);
}
