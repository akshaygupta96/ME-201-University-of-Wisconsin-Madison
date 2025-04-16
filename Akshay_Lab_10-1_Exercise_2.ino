int j = 1000;  //initialize the variable j to be 1000
void setup() {  // put your setup code here, to run once:
  Serial.begin(9600); //initialize the serial communication
  pinMode(LED_BUILTIN, OUTPUT); //initialize digital pin LED_BUILTIN as an output
}

void loop() { // put your main code here, to run repeatedly:
  if(Serial.available()>0)  //if number from serial port is more than 0
  {
    j=Serial.parseInt();    //returns number is assigned to variable j
  }
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(j);                         //wait j seconds
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(j);                         //wait j seconds
}
