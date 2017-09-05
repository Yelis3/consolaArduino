#include "MatrixControl.h"
#include "LedControlMS.h"
#define NumMatrix 4 

MatrixControl::MatrixControl(int DIN, int CLK, int CS, int matricesNum2,int intensity2) {
    pinMode(DIN, OUTPUT);
    pinMode(CLK, OUTPUT);
    pinMode(CS, OUTPUT);
    setLedIntensity(intensity2);
    setNumMatrices(matricesNum2);
     
    for (int i=0; i< NumMatrix ; i++)
    {
      lc.shutdown(i,false);    // Activar las matrices
      lc.setIntensity(i,5);    // Poner el brillo a un valor intermedio
      lc.clearDisplay(i);      // Y borrar todo
     }
}

   //Get and set ledIntensity
int MatrixControl::getLedIntensity() {
     return ledIntensity;
}
void MatrixControl::setLedIntensity(int intensity){
     ledIntensity = intensity;
}

//Get and set matricesNum
int MatrixControl::getNumMatrices() {
     return matricesNum;
}

void MatrixControl::setNumMatrices(int matricesNum2){
     matricesNum  = matricesNum2;
}

void MatrixControl::paintLed(int x, int y){
    if(x<=7&&y<=7){
      lc.setLed(0,y,x,true);
    }
    if(x>7&&y<=7){
      x = x-8;
      lc.setLed(1,y,x,true);
    }
    if(x<=7&&y>7){
      y = y-8;
      lc.setLed(2,y,x,true);
    }
    if(x>7&&y>7){
      y= y-8;
      x= x- 8;
      lc.setLed(3,y,x,true);
    }
}