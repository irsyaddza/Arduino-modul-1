const int led1 = 9;    
const int led2 = 10;   
const int led3 = 11;   
const int buttonPin = 3; 
const int potPin = A0;  
int buttonState = 0;
int lastButtonState = 0;
bool ledOn = false;   
int delayTime = 50;  

void setup() {
 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW && lastButtonState == HIGH) {
    ledOn = !ledOn;
    Serial.println(ledOn ? "LEDs ON" : "LEDs OFF");
  }
  lastButtonState = buttonState; 
  int potValue = analogRead(potPin);
  int brightness = map(potValue, 0, 1023, 0, 255);  
  if (ledOn) {
    analogWrite(led1, brightness);
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
    delayTime = map(potValue, 0, 1023, 100, 1000);  
    Serial.print("Brightness: ");
    Serial.print(brightness);
    Serial.print(" | Delay: ");
    Serial.println(delayTime);
    delay(delayTime);
  } else {
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
  }
}