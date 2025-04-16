int j=0; //initialize j to be 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,INPUT);  //access pin 12 as an input
  pinMode (13,OUTPUT);  //access pin 13 as an output
    
}

void loop() {
  // put your main code here, to run repeatedly:
  j=digitalRead(12);  //defines j as output from pin 12
  Serial.println(j);  //prints j as a line
  digitalWrite(13,j); //send a voltage to pin 13 based on j

}
