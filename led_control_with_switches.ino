int led1 = 5;
int led2 = 6;
int led3 = 3;
int led4 = 11;
int led5 = 9;
int led6 = 10;
int switch1 = 8;
int switch2 = 7;
int Reading1 = LOW;
int Reading2 = LOW;
int counter1,counter2;
int i,j;
void setup() {
  // put your setup code here, to run once:
pinMode(5 , OUTPUT);
pinMode(6 , OUTPUT);
pinMode(9 , OUTPUT);
pinMode(10 , OUTPUT);
pinMode(3 , OUTPUT);
pinMode(11 , OUTPUT);
pinMode(7 , INPUT);
pinMode(8 , INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
Reading1 = digitalRead(switch1);
Reading2 = digitalRead(switch2);
if(Reading1 == HIGH && counter1 == 0)
{
  analogWrite(led1, 130);
  analogWrite(led2, 255);
  analogWrite(led3, 0);
  counter1 = 1;
}
if(Reading2 == HIGH && counter2 == 0)
{
  analogWrite(led4, 255);
  analogWrite(led5, 0);
  analogWrite(led6, 130);
  counter2 = 1;
}
if(Reading1 == LOW && counter1 == 1)
{
  for(j = 255;j>=0;j-=15)
 {
   analogWrite(led2, j);
   analogWrite(led3, 0);
   delay(30);
 }
 for(i = 130;i>=0;i-=5)
 {
   analogWrite(led1, i);
   delay(30);
 }
 counter1 = 0;
}
  if(Reading2 == LOW && counter2 == 1)
{
  for(j = 255;j>=0;j-=15)
 {
   analogWrite(led4, j);
   analogWrite(led5, 0);
   delay(30);
 }
 for(i = 130;i>=0;i-=5)
 {
   analogWrite(led6, i);
   delay(30);
 }
 counter2 = 0;
 } 
}

