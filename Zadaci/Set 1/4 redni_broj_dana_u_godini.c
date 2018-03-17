#include<stdio.h>

int main()
{
	int dan,mjesec,godina,redni_broj;
	char jan,feb,mart,april,maj,jun,jul,aug,sept,okt,nov; // maximalne vrijednost je 31<255 mozemo koristiti char
	printf("Unesite dan: ");
	scanf("%d",&dan);
    printf("Unesite mjesec: ");
	scanf("%d",&mjesec);
	printf("Unesite godinu: ");
	scanf("%d",&godina);
	//Provjera unosa
	if(mjesec<0 || mjesec>12 || dan<0 || dan>31){
		printf("Niste unijeli tacan format dana ili mjeseca.\nPonovite unos.");
		return 0; // zavrsi program
	}
	
	// Ako je unos ispravan nastavljamo program
	jan=31; feb=28; mart=31; april=30; maj=31;
	jun=30;jul=31;aug=31;sept=30; okt=31; nov=30;
	
	// Racunanje prestupne godine
	if(godina%4==0 && godina%100!=0 || godina%400==0)
		feb=29;
	
	if(mjesec==1)
		redni_broj=dan;
	else if(mjesec==2)
		redni_broj=jan+dan;
	else if(mjesec==3)
		redni_broj=jan+feb+dan;
	else if(mjesec==4)
		redni_broj=jan+feb+mart+dan;
	else if(mjesec==5)
		redni_broj=jan+feb+mart+april+dan;
	else if(mjesec==6)
		redni_broj=jan+feb+mart+april+maj+dan;
	else if(mjesec==7)
		redni_broj=jan+feb+mart+april+maj+jun+dan;
	else if(mjesec==8)
		redni_broj=jan+feb+mart+april+maj+jun+jul+dan;
	else if(mjesec==9)
		redni_broj=jan+feb+mart+april+maj+jun+jul+aug+dan;
	else if(mjesec==10)
		redni_broj=jan+feb+mart+april+maj+jun+jul+aug+sept+dan;
	else if(mjesec==11)
		redni_broj=jan+feb+mart+april+maj+jun+jul+aug+sept+okt+dan;
	else
		redni_broj=jan+feb+mart+april+maj+jun+jul+aug+sept+okt+nov+dan;
	
	printf("Redni broj dana %d u mjesecu %d godine %d iznosi %d",dan,mjesec,godina,redni_broj);
	return 0;
}