
# Lekcija 1
## Fahr to Celsius:
####  03.03.2018. 

- Napisali smo source code (izvorni kod, sa ekstenzijom **.c** )
- Kompajlirati možemo preko C kompajlera **gcc** ili C++ kompajlera **g++**. 
  Provjera da li imamo instaliran kompajler: `gcc --version`. Ukoliko nam ne radi ova opcija (windows), potrebno je dodati putanju kompajlera u Path _Enviorenment variable_
  Iz terminala (unix) ili cmd-a(windows) možemo kompajlirati izvršni kod:
	 ```sh 
		 $ gcc fahrToCels.c
	 ``` 
 Kao rezultat kompajliranja dobili smo defaultni `a.out` ili `a.exe` file. Da bismo kompajlirali sa željenim izlazom(imenom izvrsnog dokumenta) `gcc fahrToCels.c -o myExecutableFile`.
 Takođe, moguće je podesiti _Notepad++_ da vrši automatsko kompajliranje: 
	1. Verzija Notepad-a 7.4.2 x86, potrebno je update-ovati na 7.5.4. (da se ne bi instalirao manuelno Plugin Manager. Od ver. 7.5.5 ne postoji Plugin Manager)
	2. Potrebno je da unutar Plugins postoji Plugin manager. Testirano na Windows7, update Plugin Manager ne radi _Installation failed_
	3. U C:\Program Files(x86)\Notepad++\plugin kopirati jedan od [NppExec.dll](https://sourceforge.net/projects/npp-plugins/files/NppExec/)
	4. F6 i kopirati sljedecu skriptu  i spasiti je pod nekim imenom npr. "c compile":
		>` SET GCC =C:\Program Files (x86)\CodeBlocks\MinGW\bin\gcc.exe
		NPP_SAVE // save current file
		cd $(CURRENT_DIRECTORY) // go to directory of the current file
		"$(GCC)" -g -o "$(NAME_PART)" "$(FILE_NAME)" `
 - Pokretanje izvršnog file na linuxu: `$ ./a.out` na windowsu iz _cmd_ `a.exe`.
- Testirali smo standard **c89** :
	- Napisali smo kod bez _`int`_ i bez _`return 0`_  u `main()` 
	- Kompajlirali smo kod sa i bez flaga  **-std=c89** 
	> `$ gcc fahrToCels.c -std=c89 '` 

	vidjeli smo da nije bilo upozorenja (_warnings_) pri koristenju **c89** standarda.

- Podešavali smo ispis i poravnavanja. Širina (**4**) i broj decimala (**.2**) između `%format`se mogu izostaviti uvijek. 
	> `printf("%4d \n",cels); `
	>  `printf("%4d \t %6.2d \n",cels,fahr); `
	
- Vidjeli smo **integer** dijeljenje i razlog zašto je uvijek 0 rezultat dijeljenja.
	> `cels=5/9*(fahr - 32);`
	 
	 Da bismo riješili ovaj problem možemo napraviti dijeljenje realnih brojava `5./9` ili definisati drugi redoslijed izvršavanja `cels = 5*(fahr-32)/9;` Zaključujemo 
	 > Ako aritmeticki operator ima integer operande, izvodi se operacija nad integerima. Ako aritmetički operator ima jedan operand koji je realan, integer se pretvara u realni broj prije izvršenja operacije (`float fahr; fahr-32`), 32 se automatski konvertuje u realni broj. 

- Napisali smo isti primjer pomocu `while` petlje
	Problemi koje smo imali:
	1. Uslov mora biti ispunjen da bi se izvršilo tijelo petlje. Ako ne utičemo na uslov koji je u početnom trenutku ispunjen, petlja će se vrtiti u beskonačnost.
	2. Ne zelimo `while(1);`barem ne u ovom kodu. Ne stavljati `;`
- Simboličke konstante ili imena  definišu se pretprocesorkom direktivom`#define` npr. `#define LOWERLIMIT 10`
####  Todos
1. Probati ostale formate ispisa sa primjerima:
	- Ispis oktalnih brojava`%o ,
	- Ispis heksadecimalnih brojavea `%x`, 
	- Ispis karaktera `%c`,
	- Ispis stringova `%s`,
	- Ispis samog znaka `%` sa `%%
2. `Napisati **.md** rad.
3. Odraditi primjere od 15-22str. i dokumentirati.
4. Istražiti ostale opcije gcc kompajlera (imali smo `-std`, šta je `-g`, `-Wall` i td.. ).

### Dodatne aktivnosti
- Rad sa git-om
	> git config --list
	> git config user.name "Anel"
	> git config user.email "anel_1002@hotmail.com"
	> git clone URL
	> git status
	> git log
	> git add .
	> git commit -m "Poruka od znacaja"
	> git remote -v
	> git remote add ImeNekogRemota  # obicno su imena origin,upstream
	> git branch # obicno sve radimo u master branch
	> git push imeNekogRemota master
- Rad s linux comandama:
	> ps aux | grep exeFile # ako zelimo da vidimo da li se izvršava naš exe
	> 
	
### Markdown language  .md ili .markdown
Probati napisati jedan markdown file. Pregled takvih dokumenata moguć je lokalno na [stackedit](https://stackedit.io/app). Pogledati **raw file** bilo kojeg **.md** dokumenta na githubu.
 
### Next work: Arrays, pull request, chapter numeration,gitignore 
#### 10.03.2018. 

### Literatura
- [C programming language ANSI C,Second Edition, Denniss M.Ritchie](http://cs.indstate.edu/~cbasavaraj/cs559/the_c_programming_language_2.pdf)


