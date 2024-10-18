int LED=11;
int LED1=10;
int LED2=9;
int pot=A0;
int data;

void setup(){
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(pot,INPUT);
}  
     
void loop(){    
data=analogRead(pot);
data=data/4;
analogWrite(LED,data);
analogWrite(LED1,data);
analogWrite(LED2,data);  
  
}