#include <stdio.h>

int main()
{
	int x;
	int i=0;
	
	while (1)
	{
		scanf("%d",&x);
		if (x==0) break;
		if (x%2==0) i++;
	}
	
	printf("%d",i);
	return 0;
}












