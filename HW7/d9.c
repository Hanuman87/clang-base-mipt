


#include <stdio.h>

int sum_digits(int n)
{
	if (n<10) return n;
	else return n%10+sum_digits(n/10);
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printf("%d",sum_digits(iks));
	
	
	return 0;
}


