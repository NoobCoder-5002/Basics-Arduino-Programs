#define POT A0
#define LED 13

void setup(){
    pinMode(13,OUTPUT);
    pinMode(POT,INPUT);
}

void loop(){
    int POT_value= analogRead(POT);
    int Brightness= map(POT_value,0,1023,0,255);
    
    analogWrite(LED, Brightness);
  
}


