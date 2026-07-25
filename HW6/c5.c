#include <stdio.h>


int qSum(int x)
{
	int  res=0;
	for( int i=0;i<x;i++) res+=(i+1);
	return res;
}


int main()
{
	int lim;
	
	scanf("%d",&lim);
	printf("%d", qSum(lim));
	
	return 0;
}





















