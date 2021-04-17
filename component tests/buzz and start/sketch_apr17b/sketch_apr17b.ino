//Stuart McCutchen was here
// Tyler Sheetz
//Nathan Swanson was here
const int buzzPin = 3;     // the number of the pushbutton pin
const int startPin =  2;      // the number of the LED pin
const int ledPin = 1;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(buzzPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(startPin, INPUT);

  pinMode(ledPin,OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(startPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {

    digitalWrite(ledPin,HIGH);

    
   
  } else if(buttonState ==HIGH) {
    // turn LED off:

    digitalWrite(ledPin,LOW);
   tone(buzzPin,1000);
   delay(30);
   noTone(buzzPin);
  }
}
