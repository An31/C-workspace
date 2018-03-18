#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Unesite cijeli broj x: \n");
	scanf("%d",&x);
	printf("Unesite cijeli broj y: \n");
	scanf("%d",&y);
	if(x<0 || y<0){
		printf("Ne zezajte se unesite brojeve >=0.");
		return 0;
	}
	// EXOR z=x^b ili z=!a&&b || a&&!b
	z = !x&&y || x&&!y;
	printf("Za uneseni brojeve %d %d XOR je %d\n",x,y,z);
	printf("Alternativno za EXOR mozemo pisati x^y => %d \n",x^y);
	return 0;
}