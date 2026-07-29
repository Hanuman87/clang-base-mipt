


#include <stdio.h>

int converToBIN(int num)
{
	if (num<2) return num;
	else return (num%2)+converToBIN(num/2)*10;
		
	
}


int main()
{
	int iks;
	scanf("%d", &iks);
	printf("%d",converToBIN(iks));
	
	
	return 0;
}



