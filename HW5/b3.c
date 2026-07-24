#include <stdio.h>

int main()
{
	int a,b;
	long int s=0;
	scanf("%d%d",&a, &b);
	for(int i = a; i<=b; i++)
	{
			s+=i*i;
	} 
	printf("%ld",s);
	return 0;
}


