const int ldrPin = A0;
const int ledPin = 13;
const int threshold = 400;

int ldrValue = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  
  Serial.println("LDR Night-Light System Initialized");
}

void loop() {
  ldrValue = analogRead(ldrPin);
  
  Serial.print("Light Level: ");
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
