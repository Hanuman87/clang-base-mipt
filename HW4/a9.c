#include <stdio.h>

int main()
{
		int x1,x2,x3,x4,x5,t;
		scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
		t=(x1>x2)?x1:x2;
		t=(x3>t)?x3:t;
		t=(x4>t)?x4:t;
		t=(x5>t)?x5:t;
		printf("%d",t);
		return 0;
		
}



