
#include <stdio.h>

int grow_up(int n)
{
	int digit,lastDigit=n%10;
	n=n/10;
	while (n>0)
	{
		digit=n%10;
		n=n/10;
		if (digit>=lastDigit) return 0;
		lastDigit=digit;
	}
	return 1;
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	
	(grow_up(iks))? printf("YES"):printf("NO");
	
	return 0;
}

