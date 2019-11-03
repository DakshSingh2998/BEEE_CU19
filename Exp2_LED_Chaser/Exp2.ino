void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop()
{ 
  for(int i=5;i<=8;i++)
  {
     digitalWrite(i,HIGH);
  	 delay(500);
  	 digitalWrite(i,LOW);
     
  }
}
