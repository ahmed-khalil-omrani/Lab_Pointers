#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="ahmed khalil";
	char c='k';
	char *res;
	res = strchr(str,c);
	printf("%s",res);

}
