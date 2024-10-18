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
pinmode(pot,INPUT);
}  
     
void loop(){    
  for (i=255; i>=0; i-=5){  
	analogWrite(LED,i);
  analogWrite(LED,i);
 	analogWrite(LED,i);
  data=analogRead(pot);
  data=data/6;  
  delay(data);    
 }
 for (i=255; i>=0; i-=5){  
	analogWrite(LED1,i);
  analogWrite(LED1,i);
 	analogWrite(LED1,i);
  data=analogRead(pot);
  data=data/6;  
  delay(data);    
 }
 for (i=255; i>=0; i-=5){  
	analogWrite(LED2,i);
  analogWrite(LED2,i);
 	analogWrite(LED2,i);
  data=analogRead(pot);
  data=data/6;  
  delay(data);    
 }    
}