#include<stdio.h>
int main()
{
	float c,f,fa,ce;
	printf("Enter a Celsius value to convert to Fahrenheit");
	scanf("%f",&c);
	fa=(1.8*c)+32;
	printf("\n %0.2f Celsius = %0.2f Fahrenheit",c,fa);
	printf("\nEnter a Fahrenheit value to convert to celsius");
	scanf("%f",&f);
	ce = (f-32)/1.8;
	printf("\n%0.2f Fahrenheit =  %0.2f Celsius",f,ce);
	return 0;
	}
