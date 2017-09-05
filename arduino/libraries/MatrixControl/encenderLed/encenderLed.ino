#include "MatrixControl.h"

MatrixControl m = MatrixControl(12,11,10,4,5);

void setup() {
  // put your setup code here, to run once:

}

void cuadrado(){
  //Lado Izquierdo
for(int a = 2; a <= 13;a++){
  m.paintLed(2,a);
  };
  
//Lado derecho
for(int a = 2; a <= 13;a++){
  m.paintLed(13,a);
  };

//Lado superior
for(int a = 3; a <= 12;a++){
  m.paintLed(a,2);
  };

//Lado superior
for(int a = 3; a <= 12;a++){
  m.paintLed(a,13);
  };
//

}

void e(int x,int y){
  /*
  int s = 2;
for(int a = s   ; a <= s+3;a++){
  for(int c = s; c <= s+4; c += 2){
    m.paintLed(a,c);
    }
  }
  */
  for(int a = 0; a < 5; a++){
   m.paintLed(x+a,y);
  }
  for(int a = 0; a < 5; a++){
   m.paintLed(x,a+y);
  }

  for(int a = 0; a < 5; a++){
   m.paintLed(x,a+y);
  }
  //m.pintarLed(
}

void loop() {
m.paintLed(3,3);
}
