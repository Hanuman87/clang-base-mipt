
#include <stdio.h>

void  print_simple(int n)
{
		int d=2;
		while (n>1)
		{
			while (n%d==0)
			{
				printf("%d ",d);
				n/=d;
			}
			d++;
		}
}

int main()
{
	int iks;
	
	scanf("%d", &iks);
	
	print_simple(iks);
	
	return 0;
}



















