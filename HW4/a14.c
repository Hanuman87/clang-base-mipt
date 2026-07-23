#include <stdio.h>

int main()
{
	int a,x1,x2,x3,t;
	scanf("%d",&a);
	x1= a/100%10;
	x2= a/10%10;
	x3= a%10;
	t=(x2>x3)?x2:x3;
	printf("%d",(x1 > t)?x1:t);
	return 0;
}






