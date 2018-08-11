#ifndef Pescoco_h
#define Pescoco_h

#include <Servo.h>
class pescoco{
  public:
    Pescoco(int _pino);
    void olharDireita();
    void olharEsquerda();

  private:
    Servo servo;
};

#endif
