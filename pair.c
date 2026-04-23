#include<stdio.h>
#include<math.h>


int main()
{
    int num, check;
    printf("Enter the number: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the array element: ");

    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the check number: ");
    scanf("%d", &check);

    for(int i=0; i<num-1; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            int n=arr[i]+arr[j];
            if(n==check)
            {
                printf("{%d , %d},",arr[i], arr[j]);
            }
        }
    }

    return 0;
}