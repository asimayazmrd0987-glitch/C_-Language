#include <stdio.h>
int gcd(int x, int y)
{
	int tmp;

	while (x > 0)
	{
		tmp = x;
		x = y % x;
		y = tmp;
	}
	return y;
}
int main()
{
	int n, d, g;

	printf("Please enter a number : ");
	scanf("%d%d", &n, &d);

	g = gcd(n, d);

	printf("The reduced formula is%d & %d is %d and %d", n, d, n / g, d / g);

	return 0;
}
