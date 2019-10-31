#include <stdio.h>
#include <stdlib.h>
long int ans( int x , int y);
int main(void)
{
	int base ;
	int exponent;
	printf("Enter the base:");
	scanf_s("%d", &base);
	printf("Enter the exponent:");
	scanf_s("%d", &exponent);
	printf("power(%d, %d) = %d\n", base, exponent, ans(base,exponent));
	system("pause");
	return 0;
}
long int ans(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * ans(x, y - 1);
	return ans;
}