#include<stdio.h>
main()
{
    int i,j,a[3][3],k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]>k)
                k=a[i][j];
            else
                continue;
        }
    }
    printf("%d",k);
}
