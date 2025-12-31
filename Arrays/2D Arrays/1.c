#include <stdio.h>

int main(){
	int s[3][3];//={11,22,33,44,55};
	//int *p=s[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the value of s[%d][%d]",i,j);
			scanf("%d",&s[i][j]);
		}}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("The value of s[%d][%d] are %d\n",i,j,s[i][j]);
		}
		
	}
	return 0;
}
