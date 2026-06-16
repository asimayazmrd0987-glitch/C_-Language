#include <stdio.h>

int main()
{
	int marks[]={34,45,55,42};
	int *j = marks;
	int *k,*o;
	k=&marks[2];
	o=(marks+2);
	if(k==0){
		printf("Same\n");
	}
	else{printf("Not Same\n");}
	
	printf("The address is  %d\n", *(j + 1));
	//printf("the 0 and 1 marks is %d and %d", marks[0], marks[1]);
	return 0;
}
