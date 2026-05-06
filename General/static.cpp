#include<stdio.h>

void count_it(){
	static int count =0;
	count++ ;
	printf("The number this time this function has been called is: %d\n", count);
}

int main()
{
	count_it();
	count_it();
	count_it();
	count_it();
	count_it();
	
	return 0;
}
