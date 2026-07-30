#include<stdio.h>

int main(){
	int a[5]={1,4,2,5,3};
	int n=5;
	for(int i=0;i<5;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				 int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
	    return 0;
}

