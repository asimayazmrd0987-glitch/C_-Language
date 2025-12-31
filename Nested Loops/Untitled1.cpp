#include <stdio.h>
int main(){
	int a[]={23,2353,5,565,3};
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i;i<n;i++){
		printf("%d\n",a[i]);
	}
}

