/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be
 sure to use another PWM capable pin. On most
 Arduino, the PWM pins are identified with 
 a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

 This example code is in the public domain.
 */


 // constants won't change. They're used here to
// set pin numbers:
const int buttonPin = PA7;     // the number of the pushbutton pin
const int ledPin =  PA3;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int brightness = 0;    // how bright the LED is
int fadeAmount = 6;    // how many points to fade the LED by

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
   pinMode(buttonPin, HIGH);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
 

  // set the brightness of pin 9:
  analogWrite(ledPin, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -70;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(.01);

    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(30);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(50);       

    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(110);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(130);       

    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(170);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(190);     

     digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(210);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
    delay(230);     
  
  }}
