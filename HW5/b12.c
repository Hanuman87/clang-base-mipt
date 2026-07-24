#include <stdio.h>

int main()
{
	long int x;
	int cipher,mn,mx;
	scanf("%ld",&x);
	mn=x;
	mx=-x;
	while (x>0)
	{
		cipher=x%10;
		x/=10;
		if (cipher<mn) mn=cipher;
		if (cipher>mx) mx=cipher;
	}
	
	printf("%d %d",mn,mx);
	return 0;
}









