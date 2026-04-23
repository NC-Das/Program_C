#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char st[]="Nayan";
    int len = strlen(st);
    //printf("%d %c", len, st[2]);
    int i=0, pos=-1;
    while(i<len)
    {
        if(tolower(st[i])!=tolower(st[len-1]))
        {
            pos=1;
            break;
        }
        i++;
        len--;
    }
    if(pos==-1)
    printf("Palindrom");
    else
    printf("Not palindrom");
    return 0;
}