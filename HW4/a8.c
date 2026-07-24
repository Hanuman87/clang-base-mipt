#include <stdio.h>

int main()
{
		int x1,x2,x3,t;
		scanf("%d%d%d",&x1,&x2,&x3);
		t=(x2>x3)?x2:x3;
		printf("%d",(x1 > t)?x1:t);
		return 0;
		
}


