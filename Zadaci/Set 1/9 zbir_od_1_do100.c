#include<stdio.h>
#define min_val 1
#define max_val 100
int main()
{
	int i,suma;
	_Bool uslov; 
	// _Bool je native type. Vazi za standard c99 (-std=c99)
	// Ukoliko bismo htjeli koristiti bool type, onda bismo trebali ukljuciti
	// stdbool.h
	i=min_val;
	suma=0;
	while(i<=max_val)
	{
		//uslov=i%6==0 && i%7==0 && (i>=0 && i<=50 || i>=60 && i<=max_val);
		uslov=i%6==0 && i%7==0 && (i<50 || i>60); // jednostavniji zapis, moraju ici zagrade
		if(uslov){
			suma+=i;
			printf("%d\n",i);
		}
		i++;
	}
	
	printf("Suma brojeva od %d do %d iznosi %d",min_val, max_val,suma);
	return 0;
}

// Isti ovaj zadatak koristenjem for petlje bi bio
/*
  Trivijalno
*/