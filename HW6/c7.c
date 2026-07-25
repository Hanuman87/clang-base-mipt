#include <stdio.h>


int convert(int num, int f)
{
	int res=0;
	int m=1;
	while (num>0)
	{
		res=num%f*m+res;
		num/=f;
		m*=10;
	}
	
	return res;
}


int main()
{
	int N,P;
	
	scanf("%d%d",&N,&P);
	printf("%d", convert(N,P));
	
	return 0;
}






















