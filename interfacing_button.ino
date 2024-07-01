int trigger;
int led=D1;
int button =D2;
void setup()
{
pinMode(button,INPUT);
pinMode(led,OUTPUT);
}
void loop()
{
   trigger = digitalRead(button);
  if(trigger==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
