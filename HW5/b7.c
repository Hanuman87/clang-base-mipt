
#include <stdio.h>

int main()
{
	int x,tmp,cipher1,cipher2;
	int flag=0;
	scanf("%d",&x);
	while (x>0)
	{
		cipher1=x%10;
		x/=10;
		tmp=x;
		while (tmp>0)
		{
			cipher2=tmp%10;
			tmp/=10;
			if (cipher1==cipher2)
			{
				flag=1;
				break;
			}
		}
		if (flag) break;
	}
	
	if (flag) printf("YES");
	else printf("NO");
	return 0;
}





