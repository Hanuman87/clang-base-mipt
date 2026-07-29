


#include <stdio.h>

int is_prime(int n, int delitel)
{
	if (n==1) return 0;
	if (n==2) return 1;
	if (delitel>n/2.0) return 1;
	if (n%delitel==0) return 0;
	else return is_prime(n,delitel+1);
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	(is_prime(iks,2))? printf("YES"):printf("NO");
	
	
	return 0;
}


