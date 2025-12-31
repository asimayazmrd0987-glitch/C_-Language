#include<stdio.h>
void swap(int *x,int *y){//*x and *y shows value of x and y (2,4).
int temp=*x;
*x=*y;
*y=temp;
}
int main(){
	int x=2;
	int y=4;
	printf("before swap x=%d and y=%d\n",x,y);
	swap(&x,&y);
	printf("after swaping x=%d and y=%d", x,y);
	return 0;
}

