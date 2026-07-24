#include <stdio.h>

int main()
{
	char symbl;
	
	while ((symbl=getchar())!='.')
		if(symbl>='A' && symbl<='Z')

			putchar('a' + (symbl-'A'));
		else
			putchar(symbl);
	
	return 0;
}

















