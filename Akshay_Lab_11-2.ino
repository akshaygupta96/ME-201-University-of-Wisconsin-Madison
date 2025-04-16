float j = 0;  //initialize the variable j to be 0
int i=0;
float tempvolt=0;
float temp=0;
float Analog=0;
float avg=0;

void setup() {  // put your setup code here, to run once:
  Serial.begin(9600); //initialize the serial communication

}

void loop() { // put your main code here, to run repeatedly
  for (i=0; i<1000; i++){
  
  j=analogRead(A0);
  avg=avg+j;
  }
  
  Analog=avg/1000;
  tempvolt=(5*Analog/1023);
  temp=(tempvolt-0.5)*100;
  Serial.println(temp);

  avg=0;

  if (temp<15){
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    
  }
  
  if (15<temp && temp<25){
    digitalWrite(11,HIGH);
    delay(500);
    digitalWrite(11,LOW);
    
  }

  if (25<temp){
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    
  }
  
  
}
