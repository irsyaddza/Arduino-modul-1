int LED=9;
int LED1=10;
int LED2=11;

void setup(){
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}  
     
void loop(){
digitalWrite(LED,LOW);
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
delay(500);    
digitalWrite(LED,HIGH);
delay(500);
digitalWrite(LED1,HIGH);
delay(500);
digitalWrite(LED2,HIGH);
delay(500);  

}