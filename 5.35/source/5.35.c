#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibo( unsigned long int y);
int main(void)
{
	unsigned long int number ;
	printf("Enter the n(th) number:");
	scanf_s("%u", &number);
	printf("the largest fibo is %I64u\n",fibo(number));
	system("pause");
	return 0;
}
unsigned long long int fibo(unsigned long int y)
{
	long a1 = 0, a2 = 0, a3 = 1, i;
	if (y <= 2)
		return 1;
	for (i = 3; i <= y; i++)
	{
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
	}
	return a3;
}