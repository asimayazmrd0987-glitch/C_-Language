#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	int *p=a;
	int max=*p;
	for(int i=1;i<5;i++){
		if(*(p+i)>max)
		max=*(p+i);
	}
	printf("%d",max);
	return 0;
}

