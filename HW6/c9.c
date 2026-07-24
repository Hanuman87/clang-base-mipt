
#include <stdio.h>

unsigned long long  factorial(int n)
{
		unsigned long long res=1ULL;
		for(int i=0; i<n; i++) res*=(i+1);
		return res;
}

int main()
{
	int iks;
	
	scanf("%d", &iks);
	
	printf("%llu", factorial(iks));
	
	return 0;
}


















