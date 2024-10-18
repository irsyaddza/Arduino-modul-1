int LED=11;
int LED1=10;
int LED2=9;
int pot=A0;
int data;
int i;

void setup(){
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}  
     
void loop(){    

  data=analogRead(pot);
  data=data/4;
  for (i=255; i>=0; i-=5){  
	analogWrite(LED,i);
  analogWrite(LED,i);
 	analogWrite(LED,i);  
  delay(50);    
 }
 for (i=255; i>=0; i-=5){  
	analogWrite(LED1,i);
  analogWrite(LED1,i);
 	analogWrite(LED1,i);  
  delay(50);    
 }
 for (i=255; i>=0; i-=5){  
	analogWrite(LED2,i);
  analogWrite(LED2,i);
 	analogWrite(LED2,i);  
  delay(50);    
 }    
}