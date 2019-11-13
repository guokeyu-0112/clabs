#include <stdio.h>
#include <math.h>
#include <string.h>
void others2Decimal (char *value,unsigned int *result,unsigned int radix)
{
    int i,j,digit;
    *result=0;
    for(strlen(*value-1),j=0;i>=0;i--,j++)
    {
        if(value[i]>='0'&&value[i]<='9')
                digit=value[i]-'0';
        if(value[i]>='a'&&value[i]<='f')
                digit=value[i]-'a'+10;
        if(value[i]>='A'&&value[i]<='F')
                value[i]=value[i]-'A'+10;
        *result=*result+digit*pow(radix,j);
    }
}
int main()
{
char *value;
int radix=16,result;
        printf("enter a hex number:%d",value);
        others2Decimal(value,&result,radix);
        printf("%d\n",result);
        putchar('\n');
        return 0;
    }