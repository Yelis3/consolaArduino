#include "LedControl.h"

class MatrixControl
{
  public:
   MatrixControl(int DIN,int CLK,int CS,int matricesNum2,int ledIntensity2);
   void paintLed(int x,int y); //pars

   void setLedIntensity(int ledIntensity2);
   int getLedIntensity();
   
   void setNumMatrices(int matricesNum);
   int getNumMatrices();
  
  private:
   int matricesNum;// la libreria recomienda maximo 8
   int ledIntensity;//numero entre 0 y 8
   
   LedControl lc = LedControl(12, 11, 10, matricesNum);
};
