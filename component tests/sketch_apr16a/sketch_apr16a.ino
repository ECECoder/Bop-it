//Stuart McCutchen was here
// Tyler Sheetz
//Nathan Swanson was here
const int buttonPin = 12;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH); // sets the digital pin 13 on
    delay(30);       
    // turn LED off     
    digitalWrite(ledPin, LOW);  // sets the digital pin 13 off
    delay(30);            
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}