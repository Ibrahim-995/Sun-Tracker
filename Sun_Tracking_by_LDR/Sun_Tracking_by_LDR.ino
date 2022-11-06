
#include <Servo.h> 
Servo S1;
const int ldrPin0 = A0;
const int ldrPin1 = A1;
void setup(){
  Serial.begin(9600);
  pinMode(ldrPin0, INPUT);
   pinMode(ldrPin1, INPUT);
  S1.attach(10);
}


void loop(){
  int ldrMode0 = analogRead(ldrPin0);
  int ldrMode1 = analogRead(ldrPin1);

  
  if(ldrMode0>=50){
  
     S1.write(130);
     
    Serial.print("Briteness lv0: ");
    Serial.println(ldrMode0);
    delay(500);
    
  }
  else if(ldrMode1>=200){
    S1.write(10);
    Serial.print("Briteness lvl: ");
    Serial.println(ldrMode1);
    delay(500);
    
  }

   else if(500>ldrMode1>650&&130<ldrMode0<200){
    S1.write(70);
    Serial.print("Briteness lvl: ");
    Serial.println(ldrMode1);
     Serial.print("Briteness lv0: ");
    Serial.println(ldrMode0);
    delay(500);
    
  }
  
  else {
    S1.write(75);
  }
delay(500);
  
}
