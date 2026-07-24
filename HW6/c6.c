#include <stdio.h>


int qRise(int x)
{
	unsigned long long  p=1ULL;
	for( int i=0;i<x-1;i++) p*=2;
	return p;
}


int main()
{
	int sqNum;
	
	scanf("%d",&sqNum);
	printf("%llu", qRise(sqNum));
	
	return 0;
}




















