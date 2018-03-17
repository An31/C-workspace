#include<stdio.h>

int main()
{
	int n,inverzni,brojac,prost_broj;
	
	printf("Unesite cijeli broj n: ");
	scanf("%d",&n);
	// Provjera unosa
	if(n<=0 || n>=1e4){
		printf("Unijeli ste negativan broj ili nulu ili broj veci od 1e4.\nPonovite unos.");
		return 0; // zavrsavamo program
	}
	// Ako je unos ispravan nastavljamo program
	printf("Palindromicni prosti brojevi brojevi su: ");
	for(int i=n;i<2*n;i++)
	{
		brojac=0; // broji koliko puta je trenutni broj,kao i svi brojevi iz intervala, djeljiv sa svim brojevima iz intervala
		for(int j=1;j<2*n;j++)
		{
			if(i%j==0)
				brojac++;
		}
		if(brojac==2)
		{
			inverzni=0;
			prost_broj=i; // lokalna kopija, inace bismo mijenjali i, sto ne smijemo
			while(prost_broj!=0)
			{
				inverzni=inverzni*10+prost_broj%10;
				prost_broj=prost_broj/10;
			}
			// Nakon zavrsetka while petlje varijabla prost_broj ce biti 0
			if(i==inverzni) // uporedjujemo trenutni prost broj(i) i inverzni.
				printf("%d ",inverzni);
		}
	}
	
	return 0;
}