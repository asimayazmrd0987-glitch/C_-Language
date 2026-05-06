#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Hello World";
	// int i;
	char s2[] = "UET Mardan";
	// strcat(s1, s2);
	strcpy(s2, s1);
	printf("The s2 is now %s\n", s1);
	printf("%s\n", s1);
	// printf("Length %d\n",strlen(s2));
	//	  printf(" Compare %s\n",strcmp(s1,s2));
	//		printf("%s\n",s2);
	//	}
	return 0;
}
