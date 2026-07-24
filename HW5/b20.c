#include <stdio.h>

int main()
{
	int x,flag=1;
	scanf("%d",&x);
	if (x==1) flag=0;
	for(int i=2;i * i <= x;i++)
	{
		if (x%i==0)
		{
				flag=0;
				break;
		}
	}
	if (flag) printf("YES");
	else printf("NO");
	
	return 0;
}
















