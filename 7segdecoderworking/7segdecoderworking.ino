const int LAPin = 12;     
const int LBPin = 11;
const int LCPin = 10;
const int LDPin = 9;


const int RAPin = 5;
const int RBPin = 6;
const int RCPin = 7;
const int RDPin = 8;
const int startPin =  2;      // the number of the LED 
int score=0;
const int ledPin=0;
void setup() {

  pinMode(startPin,INPUT);
  pinMode(LAPin, OUTPUT);
  pinMode(LBPin, OUTPUT);
  pinMode(LCPin, OUTPUT);
  pinMode(LDPin, OUTPUT);

  pinMode(RAPin, OUTPUT);
  pinMode(RBPin, OUTPUT);
  pinMode(RCPin, OUTPUT);
  pinMode(RDPin, OUTPUT);

  pinMode(ledPin,OUTPUT);

}

void loop() {
 
  
  to7seg(score);


  
  if (digitalRead(startPin) == LOW) {
    digitalWrite(ledPin,LOW);
   
  } else if(digitalRead(startPin) ==HIGH) {
    
    score=score+1;
    digitalWrite(ledPin,HIGH);
    
  }
  delay(20);
  

}

void to7seg(int a) {


  if(a<10)
{
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, LOW); 

   if(a==0)
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==1)
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==2)
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==3)
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==4)
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==5)
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==6)
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==7)
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(a==8)
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, HIGH); 
   }
   else if(a==9)
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, HIGH); 
   }
}
else if(a>=10)
{
String value = String(a);
   if(value.charAt(0)=='0')
   {
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='1')
   {
   digitalWrite(RAPin, HIGH); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='2')
   {
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, HIGH); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='3')
   {
   digitalWrite(RAPin, HIGH); 
   digitalWrite(RBPin, HIGH); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='4')
   {
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, HIGH);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='5')
   {
   digitalWrite(RAPin, HIGH); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, HIGH);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='6')
   {
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, HIGH); 
   digitalWrite(RCPin, HIGH);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='7')
   {
   digitalWrite(RAPin, HIGH); 
   digitalWrite(RBPin, HIGH); 
   digitalWrite(RCPin, HIGH);
   digitalWrite(RDPin, LOW); 
   }
   else if(value.charAt(0)=='8')
   {
   digitalWrite(RAPin, LOW); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, HIGH); 
   }
   else if(value.charAt(0)=='9')
   {
   digitalWrite(RAPin, HIGH); 
   digitalWrite(RBPin, LOW); 
   digitalWrite(RCPin, LOW);
   digitalWrite(RDPin, HIGH); 
   }

   if(value.charAt(1)=='0')
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='1')
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='2')
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='3')
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='4')
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='5')
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='6')
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='7')
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, HIGH); 
   digitalWrite(LCPin, HIGH);
   digitalWrite(LDPin, LOW); 
   }
   else if(value.charAt(1)=='8')
   {
   digitalWrite(LAPin, LOW); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, HIGH); 
   }
   else if(value.charAt(1)=='9')
   {
   digitalWrite(LAPin, HIGH); 
   digitalWrite(LBPin, LOW); 
   digitalWrite(LCPin, LOW);
   digitalWrite(LDPin, HIGH); 
   }




  
}




  


}
