#include <stdio.h>


int main()
{

  int lowerlimit = 0; // lower limit in Cels [4 byte]
  int upperlimit = 300; // uper limit in Cels [4 byte]
  int step = 20; // step for showing Cels  [4 byte]
  int cels=0; // inicijalizacija [4 byte]

  // C = 5/9*(F-32) = >  F = 9/5*C+32

  printf("Fahr   Celsius \n");
  for (int i = lowerlimit; i<=upperlimit; i+=step)
  {
    cels = 5*(i - 32)/9; // cels  = 5/9*(100 -32) = 5/9*68;  
    printf("%4d = > %4d \n",i,cels);
  }
  
  while(1);
  {

  }
return 0;
}
