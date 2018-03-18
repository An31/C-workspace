#include<stdio.h>
#include<math.h> // koristimo ovu biblioteku radi sqrt funkcije
int main()
{
	int k,n;
	float r,temp;
	printf("Unesite cijeli broj k: \n");
	scanf("%d",&k);
	printf("Unesite cijeli broj n: \n");
	scanf("%d",&n);
	if(k>=1e3 || n>=1e3)
	{
		printf("Unijeli ste broj k ili n veci 1000.\nNije dozvoljen unos.");
		return 0; // zavrsi program.
	}
	// Ako je unos dobar nastavljamo.
	r=1; // niz se mnozi
	temp = 0; // privremena varijabla
	for(int i=0;i<n; i++)
	{
		r=r*1/sqrt(k+temp); // ako je suma u pitanju pocetna vrijendost je 0
		temp=sqrt(k+temp); // nakon sto se izracuna vrijendnost pripremi za sljedecu iteraciju
	}
	printf("Za k=%d i n=%d vrijednost sume niza r=%.4f",k,n,r);
	return 0;
}
// kompajliranje sa gcc-om potreban linker za biblioteku math.h:
// gcc "3 sqrt niz.c" -lm 
// -l podrazumjeva lib prefix i .so ili .a(archive, staticna biblioteka - compile time i shared object dinamcka biblioteka) prefix (Linux,Windows)
// Linker -lm je linker za math biblioteku koja se zove libm.so(shared object, dinamicka biblioteka).
// Vise o bibliotekama http://www.yolinux.com/TUTORIALS/LibraryArchives-StaticAndDynamic.html
// Vise o bibliotekama http://www.tldp.org/HOWTO/Program-Library-HOWTO/static-libraries.html
// Vise o linker: https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html

