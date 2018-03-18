#include<stdio.h>

int main()
{
	int n;
	float f;
	printf("Unesite cijeli broj n: \n");
	scanf("%d",&n);
	if(n<=0){
		printf("Ne zezajte se unesite cijeli broj.");
		return 0;
	}
	f=1;
	for(int i=1;i<=n;i++)
		f=f*i;
	printf("Za uneseni broj %d faktorijel iznosi %.2f",n,f);
	return 0;
}