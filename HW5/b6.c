#include <stdio.h>

int main()
{
	int x,s=0;
	int flag=0;
	scanf("%d",&x);
	t=x%10;
	x/=10;
	while (x>0)
	{
		s=x%10;
		x/=10;
		if (s==t)
		{
			flag=1;
			break;
		}
		t=s;
	}
	
	if (flag) printf("YES");
	else printf("NO");
	return 0;
}





