#include <stdio.h>
void dem_stat(int *n){
	 *n=12;
}

int main(){
int x=10;
dem_stat(&x);
printf("%d",x);
return 0;
}
 
 
