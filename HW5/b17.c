#include <stdio.h>

int main()
{
	int lim;
	scanf("%d",&lim);
	
	
	for(int i=10; i<=lim;i++)
	{
		int s=0, p=1, x=i;
		while (x>0)
		{
			s+=x%10;
			p*=x%10;
			x/=10;
		}
		if (s==p) printf("%d ",i);
	}
	return 0;
}














