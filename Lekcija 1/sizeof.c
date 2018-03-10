#include <stdio.h>

int main()
{
  int i; // integer
  float f; // float 
  char c; // charc
  double d; // double 
  long l; // long
  short s; // short 
  int* p; // pointer

  printf("Broj byte integer-a:%d \n", sizeof(i));  
  printf("Broj byte float-a:%d \n", sizeof(f)); 
  printf("Broj byte char-a:%d \n", sizeof(c));
  printf("Broj bajta double-a:%d \n", sizeof(d));  
  printf("Broj bajta long-a:%d \n", sizeof(l)); 
  printf("Broj bajta short-a:%d \n", sizeof(s)); 
  printf("Broj bajta pointer-a:%d \n", sizeof(p)); 
  
  return 0;
}
