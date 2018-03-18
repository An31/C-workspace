#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	printf("Unesite vrijednost katete a: ");
	scanf("%d",&a);
	printf("Unesite vrijednost katete b: ");
	scanf("%d",&b);
	c=sqrt(pow(a,2)+pow(b,2));
    printf("Za katete %d i %d vrijednost hipotenuze je %d",a,b,c);
	return 0;
}
// Za kompajliranje koristiti linkovanje: gcc "6 hipotenuza.c" -lm
// gcc -v "6 hipotenuza.c" pokazuje sve komande koje gcc pokrece
// gcc -dumpspecs pokazuje ime linkera i link
// Vise o tome na : https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Spec-Files.html
// Vise o tome na: https://gcc.gnu.org/onlinedocs/
// Vise o linker: https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html