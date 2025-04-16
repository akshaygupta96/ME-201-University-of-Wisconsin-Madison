int val=0; //initialize val to be 0
float Volt=0;
float sum=0;
float avg=0;
int num=0;
float Force=0;
float Forcemax=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
    while (Serial.available()==1)
    {
      delay(100)
      sum=0
      for (int count=0; count<0; count++)
      {
        val=analogRead(A0);
        Volt=(float)val*5/1023;
        sum=sum+Volt;
      }
      avg=sum/100;
      Force=avg*1000;
      if (Force>Forcemax)
      {
        Forcemax=Force;
      }
    Serial.print(Force,4);
    Serial.print(' ');
    Serial.print(Forcemax,4);
    }
  }

}
