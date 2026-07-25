
#include <stdio.h>

int sumDigits(int x)
{
	int s=0;
	while (x>0)
	{
		s=s+x%10;
		x=x/10;
	}
	if (s%2==0) return 1;
	return 0;
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	
	(sumDigits(iks))? printf("YES"):printf("NO");
	
	return 0;
}
