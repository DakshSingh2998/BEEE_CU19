void setup()
{
  for(int i=5;i<=8;i++)
  {
  pinMode(i, OUTPUT);
}
}

void loop()
{
  for(int i=5;i<=8;i++)
  {
    
    digitalWrite(i,HIGH);
    if (i==8){
    digitalWrite(5,HIGH);
    }
    digitalWrite(i+1,HIGH);
    delay(400);
    digitalWrite(i,LOW);
    if (i==8){
    digitalWrite(5,LOW);
    }
    digitalWrite(i+1,LOW);
    delay(400);
  }
  
  
  