#include <stdio.h>
int main()
{
    char input_char;
    int dec[6];
int a,b,k,input,count;
a=0,b=0,input=0,count=0;
int bin[17];
input_char=gitchar();
while(input_char!='\n')
{
    dec[a]=input_char-'0';
    a++;
}
a--;
for( ;a>=0;a--)
{
    for(k=0;k<b;k++)
    {
        dec[a]=dec[a]*10;
    }
    input=input+dec[a];
    b++;
}
for(a=0;input>0;a++)
{
    bin[a]=((input&1)!=0?1:0);
    input>>1;
}
a--;
for( ;a>=0;a--)
{
    printf("%d",bin[a]);
    if(bin[a]==1)
    count++;
}
printf("the number of 1 is %d",count);
}