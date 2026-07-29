

#include <stdio.h>

void printCiphers(int x)
{
	if (x<10) printf("%d ", x);
	else 
	{
		printf("%d ", x%10);
		printCiphers(x/10);
		
	}
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printCiphers(iks);
	
	
	return 0;
}


