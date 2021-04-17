
const int potentPin=1;
const int ledPin=0;


void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(potentPin,INPUT);
  

}

void loop() {
  int sensorValue = analogRead(potentPin);
  int voltage = sensorValue * (5.0/1023.0);
  if(voltage<4) {
    digitalWrite(0,HIGH);
    
  }

  else{
    digitalWrite(0,LOW);
  }

}
