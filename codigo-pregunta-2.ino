// Pregunta 2: Servomotor

#include <Servo.h>

Servo SM;

  void setup(){
    SM.attach             (3);
  }

  void loop(){
  	SM.write              (0);
    delay                 (2000);
   	SM.write              (45);
    delay                 (2000);
    SM.write              (90);
    delay                 (2000);
}
