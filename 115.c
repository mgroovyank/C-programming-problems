#include<stdio.h>
main()
{
    int i,j,a[8]={9,7,6,15,16,5,10,11},l,k;
    for(i=1;i<8;i++)
    {
        for(k=0;k<i;k++)
        {
            if(a[i]>a[k])
        {
            continue;
        }
        else if(a[k]>a[i])
        {
            l=a[i];
            for(j=i;j>k;j--)
            {
                a[j]=a[j-1];
            }
            a[k]=l;
        }
    }
        }

    for(i=0;i<8;i++)
    {
        printf("%d\n",a[i]);
    }
}
