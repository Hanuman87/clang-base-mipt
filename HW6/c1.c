#include <stdio.h>


int modul(int arg)
{
	if (arg<0) return -arg;
	return arg;
}


int main()
{
	int x;
	scanf("%d",&x);
	
	printf("%d", modul(x));
	
	return 0;
}

















