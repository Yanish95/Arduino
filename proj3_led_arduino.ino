void setup() {
  pinMode(3,OUTPUT);
   pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
     pinMode(9,OUTPUT);
      pinMode(11,OUTPUT);

}

void loop() {
  
  for(int a=0 ; a<256 ; a=a+10)
  {
    analogWrite(3,a);
    delay(50);
    analogWrite(5,a);
    delay(90);
    analogWrite(6,a);
    delay(130);
    analogWrite(9,a);
    delay(170);
    analogWrite(11,a);
    delay(210);
    }

   for(int a=255 ; a>=0 ; a=a-10)
   {
    analogWrite(11,a);
    delay(50);
    analogWrite(9,a);
    delay(90);
    analogWrite(6,a);
    delay(130);
    analogWrite(5,a);
    delay(170);
    analogWrite(3,a);
    delay(210);
    
    
    }

}
