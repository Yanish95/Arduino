//Projekt numer 1- fala LED
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop()
{
  int d = 100;

  for (int a = 2; a <7 ; a++)
  {
  digitalWrite(a,HIGH);
  delay(d);  
  digitalWrite(a,LOW);
  delay(d);
  }
  for (int a = 5; a >2 ; a--)
  {
  digitalWrite(a,HIGH);
  delay(d);  
  digitalWrite(a,LOW);
  delay(d);
  }
  /*
digitalWrite(3,HIGH);
delay(d);   
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(d);   
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(d);   
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(d);   
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
delay(d);    
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
delay(d);    
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
delay(d);   
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
delay(d);   
digitalWrite(2,LOW);
*/
}
