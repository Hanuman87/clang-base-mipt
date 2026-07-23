#include <stdio.h>


int nod(int a, int b)
{
	
	if (b>a)
	{
			int tmp =a;
			a=b;
			b=tmp;
	}
	
	if (a%b==0) return b;
	
	int n=1;
	
	while (a%b>0)
	{
		n=a%b;
		a=b;
		b=n;
		
	}
	return n;
	
}

int main()
{
	int iks1, iks2;
	
	scanf("%d%d", &iks1, &iks2);
	printf("%d", nod(iks1, iks2));
	
	return 0;
}














