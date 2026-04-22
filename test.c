#include<stdio.h>

int main()

{
//   ASCII Value
 /*    for(int i=0;i<=255;i++)
    {
        printf("%d = %c \n",i, i);
    } */

    // swapping two number not using temporary variable

   /*  int a=5, b=6;

    a= a+b;
    b= a-b;
    a=a-b;
    printf("a= %d b=%d", a, b); */

    // large number among the three number using ternary operator
   /*  int a=3, b=6, c=1;

    int big = (a>b && a>c?a:b>c?b:c);
    printf("Large number is %d ", big); */

    // find midden number among three number 
    int a=3, b=6, c=8;

    int midden = (a>b&&a<c? a: b>a&&b<c?b:c>a&&c<b?c:a>c&&c<b?a:c);
    printf("The midden number is %d", midden);

    return 0;
}
