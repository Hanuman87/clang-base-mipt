

#include <stdio.h>

void printNumbers(int x)
{
	if (x==1) printf("%d ", x);
	else 
	{
		printNumbers(x-1);
		printf("%d ", x);
	}
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printNumbers(iks);
	
	
	return 0;
}
