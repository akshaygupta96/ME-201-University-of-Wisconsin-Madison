// the setup function runs once when you press reset or power the board and makes the LED blink twice
void setup() {  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() { // put your main code here, to run repeatedly:
  for(int counter1=1;counter1<=10;counter1++){  //initialize for loop
    
    for(int counter2=1;counter2<=counter1;counter2++){  //initialize for loop
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                        // wait for  0.1 seconds
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(100);                        // wait for  0.1 seconds
    }
    delay(1000);                         // wait for a second
  }
}
