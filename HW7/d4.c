


#include <stdio.h>

void print_num(int num)
{
	if (num<10) printf("%d ", num);
	else 
	{
		
		print_num(num/10);
		printf("%d ", num%10);
		
	}
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	print_num(iks);
	
	
	return 0;
}


