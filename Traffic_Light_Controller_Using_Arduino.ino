//Declare the pins on which the LEDs are connected
int ledPinRed = 2;
int ledPinYellow = 3;
int ledPinGreen = 4;

void setup() {
  // Set the pins 2, 3, 4 as output
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);

  //Turn OFF all the LEDs
  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinYellow, LOW);
  digitalWrite(ledPinGreen, LOW);
}

void loop() {
  // Successively Turn on each LED
  changeLedState(ledPinRed, 3000);     // Red ON for 3 sec
  changeLedState(ledPinYellow, 1000);  // Yellow ON for 1 sec
  changeLedState(ledPinGreen, 3000);   // Green ON for 3 sec
}

void changeLedState(int ledPin, int duration){
  //Turn ON the selected LED and turn off all the other ones
  if(ledPin == ledPinRed){
    digitalWrite(ledPinRed, HIGH);
    digitalWrite(ledPinYellow, LOW);
    digitalWrite(ledPinGreen, LOW);
  }
  else if(ledPin == ledPinYellow){
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinYellow, HIGH);
    digitalWrite(ledPinGreen, LOW);
  }
  else if(ledPin == ledPinGreen){
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinYellow, LOW);
    digitalWrite(ledPinGreen, HIGH);
  }
  else{
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinYellow, LOW);
    digitalWrite(ledPinGreen, LOW);
  }
  
  delay(duration);
}