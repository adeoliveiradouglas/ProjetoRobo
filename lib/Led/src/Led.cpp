#include <Arduino.h>
#include "Led.h"

Led::Led(int _pino){
  pinMode(_pino, OUTPUT);
  pino = _pino;
}

void Led::on(){
  digitalWrite(pino, HIGH);
}

void Led::off(){
  digitalWrite(pino, LOW);
}
