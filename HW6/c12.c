
#include <stdio.h>
#include <math.h>
 
float absol(float x)
{
    if (x < 0) return -x;
    return x;
} 

float power(float x, int p)
{
		int res=1;
		for(int i =0; i<p; i++)
		{
			res*=x;
		}
		return res;
	
}

int  factorial(int n)
{
		int f=1;
		for(int i=0; i<n; i++) f*=(i+1);
		return f;
}


float  sinus(float x)
{
		float epsilon=0.001, res=0.0;
		int i=1,z=1;
		while (1)
		{
			
			
			res+=z*power(x,i)/factorial(i);
			printf("%d %.8f %d\n",i,power(x,i), factorial(i));
			z=-z;
			i+=2;
			printf("%.8f\n", absol(res));
			if (absol(res)<epsilon) 
			{	
				
				break;
			}
		
		}
		return res;
}

int main()
{
	float iks;
	scanf("%f", &iks);
	
	printf("%.3f",sinus(iks*M_PI/180.0));
	
	return 0;
}




















