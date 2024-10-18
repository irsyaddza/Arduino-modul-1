int LED=13;
int LED1=12;
int LED2=8;

void setup(){
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}  
     
void loop(){    
digitalWrite(LED,HIGH);
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
delay(2000); 
digitalWrite(LED,LOW);
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
delay(1000); 

}