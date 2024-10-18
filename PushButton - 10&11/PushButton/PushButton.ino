int LED=11;
int LED1=10;
int LED2=9;
int tombol=2;

void setup(){
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(tombol,INPUT);
}  
     
void loop(){
if(digitalRead(tombol)==LOW){
  digitalWrite(LED,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
}
else{
  digitalWrite(LED,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
}
}