#include<stdio.h>

int i,j,n,arr[20],temp;

int insertion(int arr[]);

int main()
{
    printf("Enter the number n: ");
    scanf("%d",&n);

    printf("Enter the number in array: ");
    for(i=1;i<=n;i++)
    {
       // printf("no of i %d\n",i);
        scanf("%d",&arr[i]);
    }
   // printf("Input completed");
    insertion(arr);

    return 0;
}


int insertion(int arr[])
{
    printf("Before Insertion: ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ", arr[i]);
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("\n\n After Insertion: ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}













