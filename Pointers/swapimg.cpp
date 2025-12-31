#include<stdio.h>

void swap(int *a, int *b);

int main(){
	int x=3;
	int y=5;
	
	swap(&x,&y);
	printf("x=%d & y=%d\n",x ,y);
		return 0;
}
void swap(int *a ,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;

}
