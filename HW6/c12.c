#include <stdio.h>
#include <math.h>

float sinus(float x)
{
	float s=0,p;
	int z=1;
	long long i=1, f=1;
	p=x;
	while (p/f>=0.001)
	{
		s=s+z*p/f;
		i=i+2;
		z=-z;
		p=p*x*x;
		f=f*i*(i-1);
		
	}
	return s;
}

int main()
{
	float iks;
	scanf("%f", &iks);
	
	printf("%.3f", sinus(iks*M_PI/180));
	
	return 0;
}
