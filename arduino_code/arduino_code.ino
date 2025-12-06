#include <Servo.h>

#define SERVO_PIN_1 13
#define SERVO_PIN_2 12
#define SERVO_PIN_3 11
#define SERVO_PIN_4 10
#define SERVO_PIN_5 9

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;


void setup() {
  Serial.begin(9600);

  servo1.attach(SERVO_PIN_1);
  servo2.attach(SERVO_PIN_2);
  servo3.attach(SERVO_PIN_3);
  servo4.attach(SERVO_PIN_4);
  servo5.attach(SERVO_PIN_5);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);

  delay(2000);

  Serial.println("Started");
}

void loop() {
  while (Serial.available() > 0) {
    String string = Serial.readString();

    Serial.print("Entered: ");
    Serial.println(string);

    // TODO: napravi string s 12 charactera, 4x3, 000090... (kut 0, kut 9)

    // if (number == 0 || number > 180) {
    //   return;
    // }

    // servo1.write(number);
    // servo2.write(number);
    // servo3.write(number);
    // servo4.write(number);
    // servo5.write(number);
  }
}

