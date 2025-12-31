#include <stdio.h>

int main()
{
	int arr[] = {50, 60, 70, 80, 90};
	int *i, *j;
	i = &arr[0];
	j = &arr[3];
	printf("i=%d and j=%d", i - 1, j - 1); // here 4 is subtracted instead of 1 because of datatype memory i.e(int = 4)
	return 0;
}
