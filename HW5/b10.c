
#include <stdio.h>

int main()
{
	int x,cipher1,cipher2,flag=1;
	scanf("%d",&x);
	cipher1=x%10;
	x/=10;
	while (x>0)
	{
		cipher2=x%10;
		x/=10;
		if (cipher1<=cipher2)
		{
			flag=0;
			break;
		}
		cipher1=cipher2;
	}
	
	if (flag) printf("YES");
	else printf("NO");
	return 0;
}








