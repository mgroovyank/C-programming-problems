#include<stdio.h>
main()
{
    int arr1[4],arr2[4],arr[4],i,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<4;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<4;i++)
    {
        arr[i]=arr1[i];
    }
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    for(i=0;i<4;i++)
    {
        arr1[i]=arr2[3-i];
    }
    for(i=0;i<4;i++)
    {
        arr2[i]=arr[3-i];
    }

    for(i=0;i<4;i++)
    {
        printf("%d",arr1[i]);
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%d",arr2[i]);
    }

}
