#include<stdio.h>
#include<limits.h> // potrebno za varijable INT_MAX,INT_MIN

int main()
{
	int k,broj,suma,min_val,max_val;
	printf("Unesite broj cjelobrojnih clanova niza k: \n");
	scanf("%d",&k);
	if(k<=0)
	{
		printf("Unijeli ste negativan broj ili nulu.\nNije dozvoljen unos.");
		return 0; // zavrsi program.
	}

	// U pocetnom trenutku podesimo reference za max i min  
	min_val= INT_MAX; // maksimalna vrijednost integera iz biblioteke limits: -2147483648
	max_val= INT_MIN; // minimalna vrijednost integera iz biblioteke limits: 2147483647
	for(int i=0;i<k;i++)
	{
		printf("Unesite %d. broj: ",(i+1));
		scanf("%d",&broj);
		suma+=broj;
		if(min_val>broj)
			min_val=broj;
		if(max_val<broj)
			max_val=broj;
	}
	
	if(suma%2==0)
		printf("Suma s=%d je parna.\nMaksimalan uneseni broj je %d : ",suma,max_val);
	else
		printf("Suma s=%d je neparna.\nMinimalan uneseni broj je %d : ",suma,min_val);
	return 0;
}
// kompajliranje sa gcc-om potreban linker za biblioteku limits.h:
// gcc "2 min-max.c" -lm 