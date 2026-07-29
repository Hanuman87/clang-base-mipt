
#include <stdio.h>

void reversePrintNums(int N)
{
	if (N==1) printf("%d ", N);
	else
	{
		printf("%d ", N);
		reversePrintNums(N-1);
		
	}
	
}



int main()
{
	int iks;
	scanf("%d",&iks);
	reversePrintNums(iks);
	
	return 0;
}


















