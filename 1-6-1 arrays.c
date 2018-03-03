#include <stdio.h>
/*
@brief Count digits, white space, others

press CTRL+Z (windows) or CTRL+D (unix) to simulate EOF 
*/
#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
	int c; // current character
	short nwhite,nothers,nc; 
	nc=nwhite=nothers=0;
	int ndigit[10]; //0-9 digits
	for (short i=0; i<10; i++)
		ndigit[i] = 0;
	while((c=getchar())!=EOF)
	{
		nc++;
		if(c>='0' && c<='9') // ascii '0' = 48 '9' = 57
			ndigit[c-'0']++;
		else if(c==' ')  // ascii space = 32
			nwhite++;
		else
			nothers++;
	}
	printf("\nTotal number of chars: \n");
	printf("%d", nc-1);
	printf("\n Number of occurence of particular digits: \n");
	for(short i=0; i<10; i++)
		printf("%d ",i);
	printf("\n");
	for(short i=0; i<10; i++)
		printf("%d ",ndigit[i]);
	printf("\nNumber of occurence of white spaces: \n");
	printf("%d", nwhite);
	printf("\nNumber of occurence of other chars: \n");
	printf("%d", nothers-1);
	
return 0;
}
