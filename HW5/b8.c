
#include <stdio.h>

int main()
{
	int x,cipher,q9=0;
	scanf("%d",&x);
	while (x>0)
	{
		cipher=x%10;
		x/=10;
		if (cipher==9) q9++;
		if (q9>1) break;
	}
	
	if (q9==1) printf("YES");
	else printf("NO");
	return 0;
}






