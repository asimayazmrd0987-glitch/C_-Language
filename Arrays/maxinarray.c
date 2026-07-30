#include<stdio.h>

int main(){
	int a[5]={24,5,36,6,55};
	int *p=a;
	int max=*p;
	a[4]=3;// change the value of 55 to 3
	for(int i=1;i<5;i++){
		if(*(p+i)>max)
		max=*(p+i);
	}printf("%d",max);
	return 0;
}
