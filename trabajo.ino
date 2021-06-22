#include <Servo.h>

int trigger             = 9;
int echo                = 8;
float                   t_d_e,d;
Servo                   SM;

  void setup (){
    Serial.begin          (9600);
    pinMode               (trigger, OUTPUT);
    pinMode             (echo, INPUT);
    SM.attach           (3);
  }

  void loop(){

    digitalWrite        (trigger, LOW);
    delay               (2);
    digitalWrite        (trigger, HIGH);
    delay               (10);
    digitalWrite        (trigger, LOW);

    t_d_e               = pulseIn (echo, HIGH);
    d                   = (t_d_e / 2) / 29.15;
    Serial.print        (d);
    Serial.println      (" cm");
    delay               (1000);

        if (d < 50){
            SM.write(0);
            Serial.println ("Servomotor abierto en 0 grados.");
        }
        if (d > 100){
           SM.write(180);
           Serial.println ("Servomotor abierto en 180 grados.");
        }
        if (d > 50 && d < 100){
            SM.write(90);
            Serial.println ("Servomotor abierto en 90 grados.");
        }
  }
