#ifndef Led_h
#define Led_h

class Led{
  public:
    Led(int _pino);
    void on();
    void off();

  private:
    int pino;
};

#endif
