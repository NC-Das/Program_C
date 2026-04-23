#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

/*     for(int i=0; i<num;i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("  ");
        }
        for(int j=num; j>i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    } */


    for(int i=1; i<=num; i++)
    {
        for(int j=0; j<num-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

      for(int i=num-1; i>0; i--)
    {
        for(int j=0; j<num-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

