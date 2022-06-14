int led = 10;
int led1 = 12;
int led2 = 8;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop()
{
 redLED();
  yellowLED();
  greenLED();
  
} 

void redLED()
{
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
void yellowLED()
{
 digitalWrite(led1,HIGH);
  delay(2000);
  digitalWrite(led1,LOW);
  delay(2000);
}
void greenLED()
{
  digitalWrite(led2,HIGH);
  delay(5000);
  digitalWrite(led2,LOW);
  delay(5000);
}
