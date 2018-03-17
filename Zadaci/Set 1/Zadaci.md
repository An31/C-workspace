# Zadaci
### 17.03.2018.
## 1. Napisati program koji računa `y` za unesenu promjenjivu `x (real)` po formuli:
	 ```sh 
	           -10, x<0
		 y(x)=  1000*x, 0<=x<1
		        10*x, 1<=x<10
				x/10, x>=10
		 
	 ``` 
	
	** Za x=7.7 => y(x)= 77**
	
## 2. Napisati program kojim se unosi `k` cjelobrojnih članova jednodimenzionalnog niza. 
      Ako je suma svih učitanih članova parna, ispisati najveći učitani član.
	  Ako je suma svih učitanih članova neparna, ispisati najmanji učitani član.
	
	** Za k=3 i učitane članove: 1,4,7 => suma = 1+4+7, a 7 je najveći učitani član **
	
## 3. Napisati program kojim se za priordne brojeve  `n , n<1000` i `k, k<1000` računa izraz,
      koji mora biti tačan na 3 decimale. 
	 ```sh 
	      
		 r=  1/(sqrt(k))+1/(sqrt(k+sqrt(k)))+1/(sqrt(k+sqrt(k+sqrt(k))))+...
	 ``` 	  
	
	** Za k=2 i n=3 r =0.1951 **

	## 3. Napisati program kojim se za priordne brojeve  `n , n<1000` i `k, k<1000` računa izraz,
      koji mora biti tačan na 3 decimale. 
	 ```sh 
	      
		 r=  1/(sqrt(k))+1/(sqrt(k+sqrt(k)))+1/(sqrt(k+sqrt(k+sqrt(k))))+...
	 ``` 	  
	
	** Za k=2 i n=3 r =0.1951 **
	
	
## 4. Napisati program koji ispisuje koji je redni broj dana u godini na osnovu unesenog datuma u formi:
 	 ```sh 
	     dan, mjesec, godina
	 ``` 
	 Napomena: Prestupna godina je godina koja je djeljiva sa 4 i 400, a nije sa 100.
	 
	** Za unesene podatke dan=25 , mjesec = 3, godina = 2012 => redni broj dana u godini je rb=85 **

## 5. Napisati program kojim će se unijeti prirodni broj `n<10000`.
      Ispisati sve palindromične proste brojeve u intervalu `[n,2*n]`.
	  Napomena palindromični prosti brojevi su oni koji imaju za djelioce samo dva broja i to broj **1** i **samog sebe**.
	  Takođe oni se čitaju s lijeva isto kao s desna.

	** Za uneseni broj n=7 palindromični prosti probjevi iz intervala [7,14] su 7 i 11 **
	** Za uneseni broj n=80 palindromični prosti probjevi iz intervala [80,160] su 101,131,151 **	
	
### Gore napisane zadatke je potrebno uraditi za 90 min.

## 6. Neka se sa tastature unose stranice `a` i `b` pravougaonog trougla. Izračunati hipotenuzu `c`.

## 7. Napisati program koji za dati prirodni broj `n` utvrđuje koliko ima binarnih jedinica ako je predstavljen u binarnom obliku.

## 8. Napisati program koji od datog prirodnog broja formira broj sa istim ciframa ali u inverznom poretku.

## 9. Napisati program kojim se traži zbir brojeva od 1 do 100 djeljivih sa 6 i 7. Brojevi od 50 do 60 ne ulaze u taj zbir.
      Napomena: Uraditi upotrebom `for` i `while` petlje.

## 10. Napisati program kojim se traži zbir brojeva od 100 do 300 čija je zadnja cifra 7.

## 11. Napisati program kojim se računa faktorijel broja `n` unesenog sa tasture.
       Napomena: 
	   ```
	    faktorijel=n! = 1*2*3*...*n
	   ```
	   
## 12. Neka se sa tasture unose cjelobrojne promjenjive `x` i `y` koje mogu imati vrijednost `0` ili `1`.
       Izračunati vrijednost izlaza za EXOR (isključivo ILI) kolo.
	   
## 13. Napisati program koji se sabiraju svi neparni brojevi od 100 do 1000 upotrebom while petlje.

## 14. Napisati program u kojem se sa tasture unose napon `U` i struja `I`.
       Program računa vrijednost otpora `R` i snage `P`.
	   
## 15. Napisati program kojim se sa tasture unose `n` cjelobrojnih brojeva, te ispisuje minum i maksimum unesenih brojeva.
