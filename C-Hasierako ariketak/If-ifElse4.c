#include <math.h>
#include <stdio.h> 


int main () {
	
	int a,b,c;
	int product;
	int sqrpart;
	float sqr2;
	float sumtop;
	float mtop;
	float result;
	float result2;
	int zatiketa;
	
	printf("Enter the first number please: ");
	scanf("%i",&a);
	
	printf("Enter the second number please: ");
	scanf("%i",&b);
	
	printf("Enter the third number please: ");
	scanf("%i",&c);
	
	product=4*a*c;
	
	sqrpart=(b*b-product);
	
	if(sqrpart<0) 
	{
		printf("Operation cannot be solved");
	}
	
	else 
	{
	    sqr2=sqrt(sqrpart);
		sumtop=-b+sqr2;
		zatiketa=2*a;
		result=sumtop/zatiketa;
		printf("The first root is: %f",result);
		mtop=-b-sqr2;
		result2=mtop/zatiketa;
		printf(" and The second root is: %f",result2);
		
	}
	
	return 0;
}
