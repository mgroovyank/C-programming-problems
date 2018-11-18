#include<stdio.h>
main()
{
    int i,j,a[5]={5,1,4,2,8},b;
    for(i=0;i<5;i++)
    {
        for(j=i+1;(j!=5)&&(j<=i+1);j++)
        {
            if(a[j]>a[i])
            {
               continue;
            }
            else if(a[j]<a[i])
            {
                 b=a[i];
                 a[i]=a[j];
                 a[j]=b;

            }
        }
    }
    for(j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
}
