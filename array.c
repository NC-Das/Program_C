#include<stdio.h>
int k_th_largeNumber(int arr[], int size, int kth)
{
    int i, j, temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[kth-1];

}

int main()
{
   int arr[]={12, 3,14,22,4,6,8,32,24, 16, 9, 11, 19};
   int size = sizeof(arr)/sizeof(arr[0]);
   int kth;
   printf("Enter the kth position: ");
   scanf("%d", &kth); 
   int Kth_number = k_th_largeNumber(arr, size, kth);
    
   printf("Array is decending order: ");
   for(int i=0; i<size; i++)
   {
    printf("%d ", arr[i]);
   }
   printf("\nKth largest value is %d\n", Kth_number);
    return 0;
}