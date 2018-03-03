#include <stdio.h>
/*
@brief Count number of words from input
press CTRL+Z (windows) or CTRL+D (unix) to simulate EOF 
*/
#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
	int c;
	short nc,nw,nl,state;
	nc=nw=nl=0;
	state=OUT;
	while((c=getchar())!=EOF)
	{
		nc++;
		if(c=='\n') 
		{
			nl++;
			nc--;
		}
		if(c==' ' || c=='\t' || c=='\n') // from left to right
		{
			state = OUT;
		}
		else if(state==OUT){
			nw++;
			state = IN;
		}
	}
	printf("\nNum of chars: %d\nNum of words: %d\nNum of lines: %d \n",nc,nw,nl);
return 0;
}
