int score;
int nextinput;
unsigned long responsetime = 300;
bool fail = 1;
unsigned long timedivider;
unsigned long prevMillis = 0;
unsigned long currenttime;
bool kink;
int base = 2;
const int startbutton = 2; 
const int input0 = 3;
const int input1 = 0;
const int input2 = 1;
int read0, read1, read2;
const int red = 0;
const int green = 1;
int lightVal, lightCal;
const int buzzPin = 3;
const int LAPin = 12;     
const int LBPin = 11;
const int LCPin = 10;
const int LDPin = 9;
const int RAPin = 5;
const int RBPin = 6;
const int RCPin = 7;
const int RDPin = 8;


void setup() {
  pinMode(input1, INPUT);
  pinMode(startbutton, INPUT);
  pinMode(input0, INPUT);
  pinMode(input2, INPUT);
  pinMode(LAPin, OUTPUT);
  pinMode(LBPin, OUTPUT);
  pinMode(LCPin, OUTPUT);
  pinMode(LDPin, OUTPUT);
  pinMode(RAPin, OUTPUT);
  pinMode(RBPin, OUTPUT);
  pinMode(RCPin, OUTPUT);
  pinMode(RDPin, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  lightCal = analogRead(input1);
}

void loop() {
  while(digitalRead(startbutton)==LOW){
    digitalWrite(red, HIGH);
  }

  digitalWrite(red, LOW);
  fail = 0;
  prevMillis= millis();
  while(fail==0){
      prevMillis= millis();
      nextinput = random(0,3);
    switch(nextinput){
      case 0: // shake
        kink = 1;
        while(kink==1){

         tone(buzzPin,250);
         delay(30);
         noTone(buzzPin);



          int shake=analogRead(input0);
          if(shake<1022) {
            read0=1;
          } else{
            read0=0;
          }

          
          currenttime = millis();

          
          if(read0==1){
            score++;
            to7seg(score);
            if(score<20){
              timedivider = timedivider+.000001;
            }
            responsetime = responsetime/timedivider;
            kink = 0;
            digitalWrite(1, HIGH);
            delay(250);
            digitalWrite(1, LOW);
          } else if(read0==0 && currenttime - prevMillis > responsetime){
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
            fail = 1;
            kink = 0;
            delay(250);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
          }
        }
        break;
      case 1: // photo
        kink = 1;
        while(kink==1){

         tone(buzzPin,1000);
         delay(30);
         noTone(buzzPin);


          
          lightVal = analogRead(0);
          if(lightVal<lightCal-50){
            read1=1;
          } else {
            read1=0;
          }



          currenttime = millis();
          
          if(read1==1){
            score++;
            to7seg(score);
            if(score<20){
              timedivider=timedivider+.000001;
            }
            responsetime=responsetime/timedivider;
            kink = 0;
            digitalWrite(1, HIGH);
            delay(250);
            digitalWrite(1, LOW);
          } else if (read1==0 && currenttime - prevMillis > responsetime){
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
            fail = 1;
            kink = 0;
            delay(250);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
          }
        }
        break;
      case 2: // pot
        kink = 1;
        while(kink==1){

          tone(buzzPin,2000);
          delay(30);
          noTone(buzzPin);


          int sensorValue = analogRead(input2);
          int voltage = sensorValue * (5.0/1023.0);
          if(voltage<4) {
            read2=1;  
          }else{
            read2=0;
          }



          currenttime = millis();
          
          if(read2==1){
            score++;
            to7seg(score);
            if(score<20){
              timedivider=timedivider+.000001;
            }
            responsetime=responsetime/timedivider;
            kink = 0;
            digitalWrite(1, HIGH);
            delay(250);
            digitalWrite(1, LOW);
          } else if (read2==0 && currenttime - prevMillis > responsetime){
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
            fail = 1;
            kink = 0;
            delay(250);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
          }
        }
        break;
      default:
        
        break;
      
    }
  }
  
  // display score
  while(digitalRead(2) == LOW){
     score = 0;
     timedivider = base;
     fail = 0;
     kink = 1;
     digitalWrite(0, LOW);
     digitalWrite(1, LOW);
  }
  while(digitalRead(2)==HIGH){
    delay(1);
  }
}


void to7seg(int a) {


   if(a<10){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, LOW); 
  
     if(a==0){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     } else if(a==1){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     } else if(a==2){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     } else if(a==3){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     } else if(a==4){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     } else if(a==5){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     } else if(a==6){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     } else if(a==7){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     } else if(a==8){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, HIGH); 
     } else if(a==9){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, HIGH); 
     }
  } else if(a>=10){
     String value = String(a);
     if(value.charAt(0)=='0'){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, LOW); 
     } else if(value.charAt(0)=='1'){
     digitalWrite(RAPin, HIGH); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, LOW); 
     } else if(value.charAt(0)=='2'){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, HIGH); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='3'){
     digitalWrite(RAPin, HIGH); 
     digitalWrite(RBPin, HIGH); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='4'){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, HIGH);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='5'){
     digitalWrite(RAPin, HIGH); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, HIGH);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='6'){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, HIGH); 
     digitalWrite(RCPin, HIGH);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='7'){
     digitalWrite(RAPin, HIGH); 
     digitalWrite(RBPin, HIGH); 
     digitalWrite(RCPin, HIGH);
     digitalWrite(RDPin, LOW); 
     }else if(value.charAt(0)=='8'){
     digitalWrite(RAPin, LOW); 
     digitalWrite(RBPin, LOW); 
     digitalWrite(RCPin, LOW);
     digitalWrite(RDPin, HIGH); 
     }else if(value.charAt(0)=='9'){
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
     }else if(value.charAt(1)=='1'){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='2'){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='3'){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='4'){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='5'){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='6'){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='7'){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, HIGH); 
     digitalWrite(LCPin, HIGH);
     digitalWrite(LDPin, LOW); 
     }else if(value.charAt(1)=='8'){
     digitalWrite(LAPin, LOW); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, HIGH); 
     }else if(value.charAt(1)=='9'){
     digitalWrite(LAPin, HIGH); 
     digitalWrite(LBPin, LOW); 
     digitalWrite(LCPin, LOW);
     digitalWrite(LDPin, HIGH); 
     }
  }
}
