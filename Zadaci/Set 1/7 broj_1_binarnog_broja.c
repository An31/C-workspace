#include<stdio.h>

int main()
{
	int n;
	printf("Unesite cijeli broj n: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Nedozvoljen unos.");
		return 0;
	}
	printf("Uneseni broj je %d\n",n);
	printf("-------------------------\n");
	int broj_jedinica;
	char digit;
	int binarni_broj,iteracija;
	binarni_broj=0;
	iteracija=1;
	while(n!=0)
	{
		digit = n%2;
		binarni_broj=binarni_broj+digit*iteracija;		
		if(digit==1)
			broj_jedinica++;
		n=n/2;
		iteracija=iteracija*10;
	}
	printf("Binarni broj: %d\nBroj jedinica : %d \n\n", binarni_broj,broj_jedinica);
	
	return 0;
}

// Isti ovaj zadatak koristenjem for petlje bi bio
/*
      for(int i=n;i>0;i=i/2)
       {
        binarni_broj=binarni_broj+(i%2)*iteracija;
        iteracija=iteracija*10;

       }
*/