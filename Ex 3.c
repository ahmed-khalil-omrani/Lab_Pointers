#include <stdio.h>
#include <string.h>
char *scan()
{
	int i,b=0;
	char *string;
	printf("give string ");
	scanf("%s",string);
	while((b==0) && (i<=strlen(string)))
	{
		if(isalpha(string[i])==1)
		{
			
			b=0;
			i++;
		}
		else
		{
			printf("give string ");
			scanf("%s",string);
		}
	}
	return string;
	
}
int main()
{
	char *string;
	string=scan();
	printf("%s",string);
}
