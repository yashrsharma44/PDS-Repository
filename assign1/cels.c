#include<stdio.h>
int main()
{
	float far=0.0;
	printf("Enter the temperature in Farenheit:\n");
	scanf("%f",&far);
	float cel = 5*((far-32)/9);
	printf("Temperature in Celsius:%g\n",cel);
	return 0;
}