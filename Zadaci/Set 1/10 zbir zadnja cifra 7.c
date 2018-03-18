#include<stdio.h>
#define min_val 100
#define max_val 1000

int main()
{
	int suma,broj,brojcifara;
	suma=0;
    for(int i=min_val;i<=max_val;i++){
		broj=i;
		brojcifara=0;
		while(broj!=0){
			brojcifara++;
			broj=broj/10;
		}
		if(brojcifara==1){
			if(i==7)
				suma+=i;
		}
		else if(brojcifara==2){
			if(i%10==7)
				suma+=i;
		}
		else if(brojcifara==3){
			if((i%10)%10==7){
				suma+=i;
			}
		}
		else{
			// pretpostavljamo da je maksimalan broj 4 cifreni
			if((i%100)%10==7)
				suma+=i;
		}
	}
	printf("Suma svih brojeva od %d do %d djeljivih sa 7 je %d",min_val,max_val,suma);
	return 0;
}

// Uradi 2.1 http://coliru.stacked-crooked.com/a/44cce15b936b98b3
