#include<stdio.h>
main()
{
    int i,j,a[3]={3,1,2},b;
    int l;
    for(i=0;i<3;i++)
    {
        l=a[i];
        for(j=i+1;j<3;j++)
        {
            if(a[j]>l)
            {
               continue;
            }
            else if(a[j]<l)
            {
                l=a[j];
                b=a[i];
                a[i]=l;
                a[j]=b;


            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
}
