#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
    {
        if(arr[i]==arr[n-1-i])
        {
            printf("%d",arr[i]);
        }

    }
    }
    else
    {
         for(i=0;i<(n+1)/2;i++)
        {
         if(arr[i]==arr[n-1-i])
        {
            printf("%d",arr[i]);
        }
       }
    }


}
