#include <stdio.h>
/*
@brief Copy input to output one character at a time
linefeed or new line asciitable 10(dec)
press CTRL+Z (windows) or CTRL+D (unix) to simulate EOF 
*/

int main()
{
	int c; // because getchar() returns big value and c needs to store EOF
	printf("EOF is %d \n",EOF);
	c = getchar();
	while(c!=EOF){
		printf("\nASCII value decimal %d \n",c);
		putchar(c); // put value on the screen
		c=getchar();
	}
	
return 0;
}
