#include<stdio.h>
main()
{
    int a[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int i,b[24],c[23],d[22];
    for(i=0;i<24;i++)
    {
       b[i]=a[i+1]-a[i];
    }
    for(i=0;i<23;i++)
    {
        c[i]=b[i+1]-b[i];
    }
    for(i=0;i<22;i++)
    {
        d[i]=c[i+1]-c[i];
    }
    for(i=0;i<24;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for(i=0;i<23;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");
    for(i=0;i<22;i++)
    {
        printf("%d",d[i]);
    }



}
