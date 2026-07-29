

#include <stdio.h>

int sumNumbers(int x)
{
	if (x==1) return x;
	else return x+sumNumbers(x-1);
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printf("%d",sumNumbers(iks));
	
	
	return 0;
}

