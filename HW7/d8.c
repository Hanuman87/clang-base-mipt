

#include <stdio.h>

void PrintNumsAB(int A,int B)
{
	if (A==B) printf("%d ", A);
	else
	{
		printf("%d ", A);
		if (A>B) PrintNumsAB(A-1,B);
		
		if (A<B) PrintNumsAB(A+1,B);
	}
	
}

int main()
{
	int iks,igrek;
	scanf("%d%d",&iks,&igrek);

	PrintNumsAB(iks,igrek);	
	return 0;
}


















