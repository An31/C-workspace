#include<stdio.h>
#define min_val 100
#define max_val 1000

int main()
{
	int i,suma;
	i=min_val;
	suma=0;
	while(i<=max_val){
		if(i&1==1) // moze i%2==1, alternativno primijenja bit wise operacija(&, ne &&)
			suma+=i;
		i++;
	}
	printf("Suma brojeva od %d do %d iznosi %d",min_val, max_val, suma);
	return 0;
}