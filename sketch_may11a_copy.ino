// Drone Drop LightSwitch
// Timo Wielink 2019


//include the servo library

#include <Servo.h>

Servo servo1;

//create a servo object called servo1 ;

void setup() {
  // Attach Servo to physical port on Arduino
  Serial.begin(9600);
  servo1.attach(9);
  
}

void loop() {

  int lightValue = analogRead(A0);
  
 
  // The values are bases on the light input
  // Chnage the value 500 to the Minimum Lightinput it has
 if (lightValue > 900) {
servo1.write(160);
} else {
servo1.write(75);
}


  //lightValue = map (lightValue, 0, 500, 0, 180);

  // give the values to the servo
  // servo1.write (lightValue);
  Serial.println(lightValue);

}