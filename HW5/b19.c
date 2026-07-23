#include <stdio.h>

int main()
{
	int x,s=0;
	scanf("%d",&x);
	while (x>0)
	{
		s+=x%10;
		x/=10;
	}
	if (s==10) printf("YES");
	else printf("NO");
	
	return 0;
}















