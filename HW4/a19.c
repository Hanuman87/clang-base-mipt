#include <stdio.h>
int main()
{
		int x1,x2,x3, mx, mn, md;
		
		scanf("%d%d%d",&x1,&x2,&x3);
		
		mx=(x1>x2)?x1:x2;
		mx=(x3>mx)?x3:mx;
		
		mn=(x1<x2)?x1:x2;
		mn=(x3<mn)?x3:mn;
		
		md=x1+x2+x3-mx-mn;
		
		if (mx<mn+md)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		
		return 0;
		
}









