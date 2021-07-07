#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo; 
SoftwareSerial BT(10, 11); 

void setup() {
  myservo.attach(9);
  myservo.write(0);
  BT.begin(9600);
  BT.println("Hello from Arduino");
}

char a;

void loop() {
  if (BT.available()) {
    a=(BT.read());

    if (a=='F') {
      myservo.write(90);
      delay(2000);
      myservo.write(0);
    }
  }
}
