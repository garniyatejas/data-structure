#include <stdio.h>
int main()
{
    int arr[10], i, fist,pos=0;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\t %d",arr[i]);
    }
    for ( i = pos; i <5; i++)
    {
       arr[i]=arr[i+1];
    }
    printf("\n");
     for ( i = 0; i<4; i++)
    {
        printf("\t %d",arr[i]);
    }
}