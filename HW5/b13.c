#include <stdio.h>

int main()
{
	long int x;
	int cipher,qOdd=0,qEven=0;
	scanf("%ld",&x);
	while (x>0)
	{
		cipher=x%10;
		x/=10;
		if (cipher%2==0) qOdd++;
		else qEven++;
	}
	
	printf("%d %d",qOdd,qEven);
	return 0;
}










