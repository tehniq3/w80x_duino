/*
  based on Blink, turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014 by Scott Fitzgerald
  modified 2 Sep 2016 by Arturo Guadalupi
  modified 8 Sep 2016 by Colby Newman

  This example code is in the public domain.
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  board - https://github.com/board707/w80x_arduino
  Test sketch for W806 by Nicu FLORICA (niq_ro)
*/

#define led0 PB0
#define led1 PB1
#define led2 PB2
#define aprins LOW  // on
#define stins HIGH  // off

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led0, aprins);   // turn the LED on (LOW is the voltage level)
  digitalWrite(led1, stins);
  digitalWrite(led2, stins);
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);    // turn the LED off by making the voltage HIGH
  digitalWrite(led1, aprins);
  digitalWrite(led2, stins);
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);   // turn the LED on (LOW is the voltage level)
  digitalWrite(led1, stins);
  digitalWrite(led2, aprins);  
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);    // turn the LED off by making the voltage HIGH
  digitalWrite(led1, stins);
  digitalWrite(led2, stins);   
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);    // turn the LED off by making the voltage HIGH
  digitalWrite(led1, stins);
  digitalWrite(led2, stins);  
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);   // turn the LED on (LOW is the voltage level)
  digitalWrite(led1, stins);
  digitalWrite(led2, aprins);  
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);    // turn the LED off by making the voltage HIGH
  digitalWrite(led1, aprins);
  digitalWrite(led2, stins);
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, aprins);   // turn the LED on (LOW is the voltage level)
  digitalWrite(led1, stins);
  digitalWrite(led2, stins);
delay(100);                   // wait for 1/10 of second
  digitalWrite(led0, stins);   // turn the LED on (LOW is the voltage level)
  digitalWrite(led1, stins);
  digitalWrite(led2, stins);     
delay(100);                  // wait for a second
}
