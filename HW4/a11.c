#include <stdio.h>

int main()
{
		int x1,x2,x3,x4,x5,mx,mn;
		scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
		mn=(x1<x2)?x1:x2;
		mn=(x3<mn)?x3:mn;
		mn=(x4<mn)?x4:mn;
		mn=(x5<mn)?x5:mn;
		
		mx=(x1>x2)?x1:x2;
		mx=(x3>mx)?x3:mx;
		mx=(x4>mx)?x4:mx;
		mx=(x5>mx)?x5:mx;
		
		printf("%d",mn+mx);
		return 0;
		
}





