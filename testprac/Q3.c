#include<stdio.h>

typedef struct complex{
	int real;
	int comp;
}complex;

complex add(complex num1, complex num2)
{
	complex num3;
	num3.real =num1.real + num2.real;
	num3.comp = num1.comp + num2.comp;
	return(num3);
}

complex sub(complex num1, complex num2)
{
	complex num3;
	num3.real =num1.real - num2.real;
	num3.comp = num1.comp - num2.comp;
	return(num3);
}

complex mul(complex num1, complex num2)
{
	complex num3;
	num3.real = (num1.real * num2.real) - (num1.comp * num2.comp);
	num3.comp = (num1.real * num2.comp) - (num1.comp * num1.real);
	return(num3);
}

complex conjugate(complex num)
{
	num.comp = -(num.comp);
	return num;
}

complex division(complex num1, complex num2)
{
	complex num3 = mul(num1,num2);
	num3.real = (num3.real)/((num2.real)*(num2.real)+(num2.comp)*(num2.comp));
	num3.comp = (num3.comp)/((num2.real)*(num2.real)+(num2.comp)*(num2.comp));
	return (num3);
}

complex power(complex num, int exp)
{
	int i=0;
	complex temp;
	temp.real=1;
	temp.comp = 1;
	for(i=0;i<exp;i++)
	{
		temp = mul(temp, num);
	}
	return temp;
}

void polyValue()
{
	printf("Enter the order of polynomial\n");
	int order;
	scanf("%d",&order);
	printf("Enter the x at which value of polynomial needs to be calculated\n");
	complex num;
	scanf("%d%d",&num.real,&num.comp);
	int i=0;
	complex sum;
	sum.real=0;
	sum.comp = 0;
	for(i=1;i<=order;i++)
	{
		printf("Enter the coefficient of x^%d\n",i);
		complex coeff;
		scanf("%d%d",&coeff.real,&coeff.comp);
		complex val1 = power(num,i);
		complex val2 = mul(val1,coeff);
		sum = add(sum,val2);
	}
	printf("Value of the coeff :real %d, complex %d\n",sum.real,sum.comp);
}

int main()
{
	printf("Welcome to complex number representation!!\n");
	polyValue();
}