
#include <stdio.h>

int main()
{
	int x,cipher,flag=1;
	scanf("%d",&x);
	while (x>0)
	{
		cipher=x%10;
		x/=10;
		if (cipher%2!=0)
		{
			flag=0;
			break;
		}
	}
	
	if (flag) printf("YES");
	else printf("NO");
	return 0;
}







