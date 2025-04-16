int val=0;
int Volt=0;
int j=0;
int Blink=0;
int Volt2=0;

void setup()  {
  //put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  val=analogRead(A0); //obtains value reading from A0 sensor
  float Volt=(val*0.00097656)*5;  //convert voltage to value
  float j=14.7+100*(Volt2-1);     //convert voltage to pressure
  Blink=1000-160*(Volt);

  Serial.println(Volt);
  Serial.println(val);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(Blink);
  digitalWrite(LED_BUILTIN,LOW);
  delay(Blink);
}

