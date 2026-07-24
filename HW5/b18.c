#include <stdio.h>

int main()
{
	int lim,fn,fn_1,fn_2;
	scanf("%d",&lim);
	fn_1=1;
	fn_2=1;
	if (lim==1) printf("%d ",fn_1);
	else printf("%d %d ",fn_1,fn_2);
	for(int i=3; i<=lim; i++)
	{
		fn=fn_1+fn_2;
		printf("%d ",fn);
		fn_2=fn_1;
		fn_1=fn;
	
	}
	return 0;
}















