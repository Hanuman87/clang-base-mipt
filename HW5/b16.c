#include <stdio.h>

int main()
{
	int x1,x2, nod;
	scanf("%d%d",&x1,&x2);
	
	if (x2>x1)
	{
			int tmp =x1;
			x1=x2;
			x2=tmp;
	}
	
	if (x1%x2==0) nod=x2;
	
	
	while (x1%x2>0)
	{
		nod=x1%x2;
		x1=x2;
		x2=nod;
		
	}
	
	printf("%d",nod);
	return 0;
}













