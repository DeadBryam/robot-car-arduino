#include <robot-car-arduino.h>
byte pinEcho=9;
byte pinTrigger=10

//Ultrasonido sensor1(&pintTrigger, &pinEcho);
Ultrasonido sensor2;

void setup(){
    Serial.begin(9600);
    sensor2= Ultrasonido(&pintTrigger, &pinEcho);
}

void loop(){
    Serial.println(sensor2.medirCM());
    delay(5000);
}