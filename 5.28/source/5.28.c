#include <stdio.h>
#include <stdlib.h>
char output(char a);
int main(void)
{
	char input,x;
	printf("Enter the upper case(or the lower case):");
	scanf_s("%c", &input);
	x = input;
	printf("the upper case(or the lower case) is :%c\n",output(x));
	system("pause");
	return 0;
}
char output(char x)
{
	if (x >=97)
	{
		return x - 32;
	}
	else
	{
		return x + 32;
	}

}
