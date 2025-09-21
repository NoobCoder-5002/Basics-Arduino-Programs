
#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7

void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(LED1, 1);
  delay(500);
  digitalWrite(LED1, 0);
  
  delay(1000);

  digitalWrite(LED2, 1);
  delay(500);
  digitalWrite(LED2, 0);

  delay(1000);

  digitalWrite(LED3, 1);
  delay(500);
  digitalWrite(LED3, 0);

  delay(1000);

  digitalWrite(LED4, 1);
  delay(500);
  digitalWrite(LED4, 0);

  delay(1000);

  digitalWrite(LED5, 1);
  delay(500);
  digitalWrite(LED5, 0);

  delay(1000);

  digitalWrite(LED6, 1);
  delay(500);
  digitalWrite(LED6, 0);

  delay(1000);

  digitalWrite(LED7, 1);
  delay(500);
  digitalWrite(LED7, 0);

}
