#include<stdio.h>
int main(){
    char name[]="ASIM AYAZ";
   int i=0;
   while (name[i]!='\0')
   {
    printf("%c\n",name[i]);
    i++;
   }
printf("\n");
    //printf("The string entered is : %s\n",name);
return 0;
}