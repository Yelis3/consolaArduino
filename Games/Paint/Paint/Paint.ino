#include <LedControl.h>
int pinDIN = 12;
int pinCS = 7;
int pinCLK = 8; 

int pinUP = 0;
int pinRIGHT = 1;
int pinDOWN = 2;
int pinLEFT = 3;
int pinENTER = 4;

int N = 8;

int posX = 3, posY = 3; //pos inicial del puntero

int matrix[N][N];
for(int i=0; i<N; i++)
{
  for(int j=0; j<N; j++)
  {
    matrix[i][j] = 0;
  }
}

void draw()
{
  if(matrix[posX][posY] == 0)
  {
    lc.setLed(0, posX, posY, true);
    matrix[posX][posY] = 1;
  }
  else if(matrix[posX][posY] == 1)
  {
    lc.setLed(0, posX, posY, false);
    matrix[posX][posY] = 0;
  }

  //lc.setLed(0, x, y, matrix[x][y] == 0);
}

//dir: 0 arriba, 1 derecha, 2 abajo, 3 izquierda
//x y y son las coordenadas actuales
void movePointer(int dir)
{
  if(matrix[posX][posY] == 0)
  {
    lc.setLed(0, posX, posY, false);
  }
  if(dir == 0)
  {
    if(posY < 7)
    {
      posY = posY + 1;
    }
  }
  else if(dir == 0)
  {
    if(posX < 7)
    {
      posX = posX + 1;
    }
  }
  else if(dir == 0)
  {
    if(posY > 0)
    {
      posY = posY - 1;
    }
  }
  else if(dir == 0)
  {
    if(posX > 0)
    {
      posX = posX + 1;
    }
  }
  lc.setLed(0, posX, posY, true)
}

void setup() 
{
  pinMode(13, OUTPUT);
  lc.shutdown(0, false);
  lc.setIntensity(0,8);

  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  movePointer(0);
}

void loop() 
{
  if(digitalRead(pinUP == HIGH)
  {
    movePointer(0);
  }
  if(digitalRead(pinRIGHT == HIGH)
  {
    movePointer(1);
  }
  if(digitalRead(pinDOWN == HIGH)
  {
    movePointer(2);
  }
  if(digitalRead(pinLEFT == HIGH)
  {
    movePointer(3);
  }
  if(digitalRead(pinENTER == HIGH)
  {
    draw();
  }
}
