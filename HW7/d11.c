
#include <stdio.h>

int quaOnes(int num)
{
	if (num<2) return num;
	else return (num%2)+quaOnes(num/2);
		
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printf("%d",quaOnes(iks));
	
	
	return 0;
}



