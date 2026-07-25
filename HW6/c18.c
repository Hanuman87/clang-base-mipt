
#include <stdio.h>

int is_digit(char c)
{
	if (c>='0' && c<='9') return 1;
	return 0;	
}


int main()
{
	char symbl;
	int qua=0;

	while ((symbl=getchar())!='.')
		if (is_digit(symbl))
			qua++;

	printf("%d",qua);
	
	return 0;
}


