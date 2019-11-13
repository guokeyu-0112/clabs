#include <stdio.h>
int main()
{
unsigned int hex(char*s);
unsigned int dec,s;
    {
        char*p=s;
        if(*p=='\0')
        return 0;
        while(*p=='0')
        p++;
        int dec=0;
        char c;
        while(c==*p++)
        {
            dec<<4;
            if(c>='0'&&c<='9')
            {
                dec=dec+(c-'0');
                continue;
            }
            if(c>='a'&&c<='f')
            {
                dec=dec+(c-'a')+10;
                continue;
            }
            if(c>='A'&&c<='F')
            {
                dec=dec+(c-'A')+10;
                continue;
            }
            return -1;
            if(dec>'FFFFFFFF'-'0')
            return -1;
        printf("the number you enter is too big,the max number is FFFFFFFF");
        }
        printf("enter a hex number:%d",hex);
        printf("the dec number is%d",dec);
        return 0;
    }
       
}