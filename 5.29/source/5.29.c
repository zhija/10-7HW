#include <stdio.h>
#include <stdlib.h>
int gcd(int x,int y);
int lcm(int x, int y);
int main(void)
{
	int a, b,x;
	printf("�п�J��Ʀr�H��X�̤p������:");
	scanf_s("%d%d", &a, &b);
	printf("lcm(%d,%d)=%d\n",a,b,lcm(a,b));

	system("pause");
	return 0;
}
int gcd(int x, int y)
{
	while (y != 0)
	{
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}
int lcm(int x ,int y)
{
	return x * (y / gcd(x, y));
}