//Vamos a hacer un pong :D

//Variables del manejo de la matriz
#include <LedControl.h>
int timer = 10;
int pinDIN = 12;
int pinCS = 7;
int pinCLK = 8; 

//Coordenadas iniciales
int ballX = 4, ballY = 4;
int p1X = 0, p1Y = 3;
int p2X = 7, p2Y = 3;

//X y Y son las coordenadas actuales
//dirX: -1 izquierda, 1 derecha
//dirY -1 arriba, 0 centro, 1 abajo
void drawBall(int x, int y, int dirX, int dirY)
{
  lc.setLed(0, x, y, false);
  lc.setLed(0, x+dirX, y+dirY);
}


void drawPlayer(int id, int y, int dirY)
{
  
  if(id == 1)
  {
    lc.setLed(0 , p1X, y, false);
    lc.setLed(0 , p1X, y+1, false);
    if((dirY == 1 && y < 6) || (dirY == -1 && y > 0))
    {
      lc.setLed(0, p1X, y+dirY, true);
      lc.setLed(0, p1X, y+dirY+1, true);
    }
  }
  else if(id == 2)
  {
    lc.setLed(0 , p2X, y, false);
    lc.setLed(0 , p2X, y+1, false);
    if((dirY == 1 && y < 6) || (dirY == -1 && y > 0))
    {
      lc.setLed(0, p2X, y+dirY, true);
      lc.setLed(0, p2X, y+dirY+1, true);
    }
  }
}



void setup() 
{
  pinMode(13,OUTPUT);
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
}

void loop() 
{
  

}
