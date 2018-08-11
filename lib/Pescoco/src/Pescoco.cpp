#include <Arduino.h>
#include "Pescoco.h"

Pescoco::Pescoco(int pino){
  servo.attach(pino);
}

void Pescoco::olharEsquerda(){
  servo.write(180);
}

void Pescoco::olharDireita(){
  servo.write(0);
}
