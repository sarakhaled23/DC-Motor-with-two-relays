int Direction1 = 2;
int Direction2 = 4;

void setup()
{
  pinMode(Direction1, OUTPUT);
  pinMode(Direction2, OUTPUT);
}

void loop()
{
  digitalWrite(Direction1,HIGH);
  digitalWrite(Direction2,LOW);
  delay(2000); 
  digitalWrite(Direction1, LOW);
  digitalWrite(Direction2, HIGH);
  delay(2000); 

}
