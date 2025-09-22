#define RED 11
#define YELLOW 12
#define GREEN 13

void setup() {
    pinMode(RED,OUTPUT);
    pinMode(YELLOW,OUTPUT);
    pinMode(GREEN,OUTPUT);
}

void loop() {
    digitalWrite(RED,1);
    digitalWrite(YELLOW,0);
    digitalWrite(GREEN,0);
    
    delay(5000);
    
    digitalWrite(RED,0);
    digitalWrite(YELLOW,1);
    digitalWrite(GREEN,0);
    
    delay(2500);
    
    digitalWrite(RED,0);
    digitalWrite(YELLOW,0);
    digitalWrite(GREEN,1);
    
    delay(5000);
    
}
