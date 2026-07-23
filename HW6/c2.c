#include <stdio.h>


int power(int n, int p)
{
	int res=1;
	for(int i=0; i<p; i++) res=res*n;
	return res;
}


int main()
{
	int x,pow;
	scanf("%d%d",&x, &pow);
	
	printf("%d", power(x,pow));
	
	return 0;
}


















