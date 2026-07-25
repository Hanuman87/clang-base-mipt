#include <stdio.h>

char chageCase(char in)
{
		return 'A' + (in-'a');
}

int main()
{
	char symbl;
	
	while ((symbl=getchar())!='.')
		if(symbl>='a' && symbl<='z')

			putchar(chageCase(symbl));
		else
			putchar(symbl);
	
	return 0;
}


















