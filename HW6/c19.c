#include <stdio.h>

int digit_to_num(char c)
{
	return (int) c- (int)'0';
	
}

int is_digit(char c)
{
	if (c>='0' && c<='9') return 1;
	return 0;	
}


int main()
{
	char symbl;
	int sumDigits=0;

	while ((symbl=getchar())!='.')
		if (is_digit(symbl))
			sumDigits=sumDigits+digit_to_num(symbl);

	printf("%d",sumDigits);
	
	return 0;
}


