#include<stdio.h>
int main(){
    char ch[]="ASIM AYAZ";
    char *ptr;
    ptr = ch;
    while (*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    printf("\n");

return 0;
}
