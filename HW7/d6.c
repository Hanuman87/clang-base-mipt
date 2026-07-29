
#include <stdio.h>

void reverse_string()
{
	char symbl;
	if ((symbl=getchar())=='.') printf("");
	else
	{
		
		reverse_string();
		putchar(symbl);
	}
	
}



int main()
{
	//char symbl;
	reverse_string();
	
	return 0;
}

















