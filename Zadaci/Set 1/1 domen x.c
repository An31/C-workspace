#include<stdio.h>

int main()
{
	float x,y;
	printf("Unesite vrijednost od x: \n");
	scanf("%f",&x);
	
	if(x<0)
		y=-10;
	else if(x>=0 && x<1)
		y=1e3*x; // scientific notation
	else if(x>=1 && x<10)
		y=10*x;
	else
		y=x/10;
	
	printf("Vrijednost funkcije y(x)=%.2f",y);
	return 0;
}