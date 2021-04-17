//Stuart McCutchen was here
// Tyler Sheetz
//Nathan Swanson was here
const int LAPin = 12;     
const int LBPin = 11;
const int LCPin = 10;
const int LDPin = 9;


const int RAPin = 5;
const int RBPin = 6;
const int RCPin = 7;
const int RDPin = 8;


void setup() {
  // initialize the LED pin as an output:
  pinMode(LAPin, OUTPUT);
  pinMode(LBPin, OUTPUT);
  pinMode(LCPin, OUTPUT);
  pinMode(LDPin, OUTPUT);

  pinMode(RAPin, OUTPUT);
  pinMode(RBPin, OUTPUT);
  pinMode(RCPin, OUTPUT);
  pinMode(RDPin, OUTPUT);
}

void loop() {
    
    //0
    digitalWrite(LAPin, LOW); 
   digitalWrite(RAPin,LOW);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);
   
   
   
   //1
 digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);



//2
    digitalWrite(LAPin, LOW); 
   digitalWrite(RAPin,LOW);
   
   digitalWrite(LBPin, HIGH); 
   digitalWrite(RBPin,HIGH);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);

   //3

   digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, HIGH); 
   digitalWrite(RBPin,HIGH);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);

   //4

   digitalWrite(LAPin, LOW); 
   digitalWrite(RAPin,LOW);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, HIGH); 
   digitalWrite(RCPin,HIGH);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);


   //5

   digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, HIGH); 
   digitalWrite(RCPin,HIGH);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);

   //6

   digitalWrite(LAPin, LOW); 
   digitalWrite(RAPin,LOW);
   
   digitalWrite(LBPin, HIGH); 
   digitalWrite(RBPin,HIGH);
   
   digitalWrite(LCPin, HIGH); 
   digitalWrite(RCPin,HIGH);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);


   delay(30);


    //7

   digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, HIGH); 
   digitalWrite(RBPin,HIGH);
   
   digitalWrite(LCPin, HIGH); 
   digitalWrite(RCPin,HIGH);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);


    //7

   digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, HIGH); 
   digitalWrite(RBPin,HIGH);
   
   digitalWrite(LCPin, HIGH); 
   digitalWrite(RCPin,HIGH);
   
   digitalWrite(LDPin, LOW); 
   digitalWrite(RDPin,LOW);

   delay(30);

   //8

   digitalWrite(LAPin, LOW); 
   digitalWrite(RAPin,LOW);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, HIGH); 
   digitalWrite(RDPin,HIGH);

   delay(30);


//9

   digitalWrite(LAPin, HIGH); 
   digitalWrite(RAPin,HIGH);
   
   digitalWrite(LBPin, LOW); 
   digitalWrite(RBPin,LOW);
   
   digitalWrite(LCPin, LOW); 
   digitalWrite(RCPin,LOW);
   
   digitalWrite(LDPin, HIGH); 
   digitalWrite(RDPin,HIGH);

   delay(30);

     
   
   


   
}
