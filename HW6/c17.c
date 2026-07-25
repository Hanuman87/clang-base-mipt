


#include <stdio.h>



int multDigits(int x)
{
	int p=1;
	while (x>0)
	{
		p=p*(x%10);
		x=x/10;
		
	}
	return p;
	
}


int sumDigits(int x)
{
	int s=0;
	while (x>0)
	{
		s=s+x%10;
		x=x/10;
	}
	return s;
	
}


int is_happy_number(int n)
{
	if (multDigits(n)==sumDigits(n)) return 1;
	return 0;
}


int main()
{
	int iks;
	scanf("%d", &iks);
	
	(is_happy_number(iks))? printf("YES"):printf("NO");
	
	return 0;
}

