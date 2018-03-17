#include<stdio.h>

int main()
{
	int n,inverzni;
	
	printf("Unesite cijeli broj n: ");
	scanf("%d",&n);
	// Provjera unosa
	if(n<=0){
		printf("Unijeli ste negativan broj ili nulu.\nPonovite unos.");
		return 0; // zavrsavamo program
	}
	// Ako je unos ispravan nastavljamo program
	printf("Uneseni broj %d ima invertovani oblik:",n);
	inverzni=0;
	while(n!=0)
	{
		inverzni=inverzni*10+n%10;
		n=n/10;
	}
	printf("%d",inverzni);
	return 0;
}