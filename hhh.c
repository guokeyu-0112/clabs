#include <stdio.h>
#define MAXCHAR 50
int main()
{
    char ch;
    int a=0,b=0;
    while((ch=getchar())!='\n')
    {
        if(ch=='0')
        a++;
        if(ch=='a')
        b++;
    }
    printf("%s",ch);
    printf("the number of a is:%d and the number of 0 is:%d",a,b);
}