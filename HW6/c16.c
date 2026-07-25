#include <stdio.h>


int is_prime(int n)
{
	if (n<2) return 0;
	for(int i=2;i * i <= n;i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}	
	return 1;
}


int main()
{
	int x;
	scanf("%d",&x);
	
	if (is_prime(x)) printf("YES");
	else printf("NO");
	
	return 0;
}

















