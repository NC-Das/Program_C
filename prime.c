#include<stdio.h>
#include<math.h>
int main()
{
    int num, pos=-1, i, lim;
    printf("Enter the number: ");
    scanf("%d", &num);

    lim = sqrt(num);
    for(i=2;i<=lim; i++)
    {
        if(num%i==0)
        {
            pos=1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("%d is a prime number\n", num);
    }
    else
        printf("%d is a not prime number\n", num);

    return 0;
}