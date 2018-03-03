#include <stdio.h>
/*
@brief Count characters in input
press CTRL+Z (windows) or CTRL+D (unix) to simulate EOF 
*/

int main()
{
	int c;
	long nc=0; // number of characters
	
	while((c=getchar())!=EOF){
		nc++;
		printf("red. broj: %ld \n", nc);
	}
	
return 0;
}
