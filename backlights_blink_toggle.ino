//By Jacob Kolb
//simple blink sketch loaded on to a 5v Adafruit Trinket 

//led & button pins
const int blinkerLED = 2;
//timing & delays
int wait = 500;

void setup() {
  pinMode(blinkerLED,OUTPUT);
}

void loop() {
  digitalWrite(blinkerLED,HIGH);
  delay(wait);
  digitalWrite(blinkerLED,LOW);
  delay(wait);
  
}
