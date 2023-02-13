#include <stdio.h>
int main()
{
    int arr[10], i, fist,pos=2;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\t %d",arr[i]);
    }
    printf("\nEnter position:");
    scanf("%d",&pos);
    for ( i = pos; i <5-1; i++)
    {
       arr[i]=arr[i+1];
    }
    printf("\n");
     for ( i = 0; i <5-1; i++)
    {
        printf("\t %d",arr[i]);
    }
}