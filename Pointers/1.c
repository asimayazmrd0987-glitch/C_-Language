#include <stdio.h>

int main()
{
	int age = 12;
	int *ptr = &age;
	int _age = *ptr;

	printf("The age is %d", _age);
	return 0;
}
