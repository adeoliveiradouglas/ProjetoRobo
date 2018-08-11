#include <Arduino.h>
#include <Led.h>
#include <Servo.h>
#include <Ultrasonic.h>

Led hardware(13);
Servo pescoco;
Ultrasonic olhos(2,3);
int distanciaDireita,
    distanciaEsquerda;

void setup() {
  Serial.begin(9600);
  pescoco.attach(4);
}

void loop() {
  pescoco.write(90);
  hardware.off();
   if(olhos.distanceRead() < 10 && olhos.distanceRead() > 5){
     //parar de andar e decidir para onde vai
     delay(100);
     pescoco.write(45);
     delay(100);
     pescoco.write(0);
     delay(500);
     distanciaDireita = olhos.distanceRead();

     delay(100);
     pescoco.write(45);
     delay(100);
     pescoco.write(90);
     delay(100);
     pescoco.write(135);
     delay(100);
     pescoco.write(180);
     delay(500);
     distanciaEsquerda = olhos.distanceRead();

     if (distanciaDireita > distanciaEsquerda){
       //há mais espaço livre na direita
       Serial.println("direita");
     } else {
       Serial.println("esquerda");
     }
     pescoco.write(90);
   }

   delay(500);
}
