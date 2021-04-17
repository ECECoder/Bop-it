
const int shakePin=1;
const int ledPin=0;


void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(shakePin,INPUT);
  

}

void loop() {

  int shake=analogRead(shakePin);

  
  if(shake<1022) {
    digitalWrite(0,LOW);
    
  }

  else{
    digitalWrite(0,HIGH);
  }

}
