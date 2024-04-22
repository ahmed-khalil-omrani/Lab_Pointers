#include <stdio.h>
char scan()
{
    char c;
    printf("give char");
    scanf(" %c",&c);
    return c;
}
void swap(char *c1, char *c2)
{
    char temp;
    temp=*c1;
    *c1=*c2;
    *c2=temp;
}
int main() {
    char c1 , c2 ;
    c1=scan();
    c2=scan();
    swap(&c1 ,&c2);
    printf("c1=%c\n",c1);
    printf("c2=%c\n",c2);
    return 0;
}
