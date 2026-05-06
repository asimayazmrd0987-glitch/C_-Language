#include <stdio.h>

int mstrlen(char str[])
{
	int i = 0;
	char c = str[i];
	while (str[i] != '\0')
	{
		i++;
	}
}
void mstrcpy(char target[], char source[])
{
	int i, len = mstrlen(source);
	for (i = 0; i < len; i++)
	{
		target[i] = source[i];
	}
	target[i] = '\0';
}
int main()
{
	char source[] = "Asim";
	char target[20] = "asim"; // doesn't effect cuz source is copied to it;
	mstrcpy(target, source);
	printf("%s %s", source, target);
	return 0;
}
