int x = 0;  //initialize the variable j to be 0
int aOPin=3;
float Volt=0.5;
void setup() {  // put your setup code here, to run once:
  Serial.begin(9600); //initialize the serial communication

}

void loop() { // put your main code here, to run repeatedly:
  if(Serial.available()>0)  //if number from serial port is more than 0
  {
    x=Serial.parseInt();    //returned number is assigned to variable j
  }
  Volt=(float) x*2.55;
  analogWrite(aOPin,Volt);
}
