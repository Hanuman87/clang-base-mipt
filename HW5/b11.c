

#include <stdio.h>

int main()
{
	int x,cipher,reversedX=0, sign=1;
	scanf("%d",&x);
	
	if (x<0)
	{
		sign=-1;
		x=-x;
	}
	while (x>0)
	{
		cipher=x%10;
		x/=10;
		reversedX=reversedX*10+cipher;
	}
	
	printf("%d",reversedX*sign);
	return 0;
}








