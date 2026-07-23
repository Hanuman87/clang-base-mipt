#include <stdio.h>


int f(int x)
{
	if (x<-2) return 4;
	else
		if (x>=2) return x*x+4*x+5;
		else return x*x;
}


int main()
{
	int x,mx;
	
	scanf("%d",&x);
	mx=f(x);
	if (x != 0)
	{
		while (1)
		{
			scanf("%d",&x);
			if (x==0) break;
			if (f(x)>mx) mx=f(x);
			
		}
		printf("%d", mx);
	}
	return 0;
}



















