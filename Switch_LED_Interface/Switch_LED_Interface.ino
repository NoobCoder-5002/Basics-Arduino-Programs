void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
  int a;
  a = digitalRead(12);
  if(a==1)
    digitalWrite(13,HIGH);
 else
   digitalWrite(13,LOW);
}
