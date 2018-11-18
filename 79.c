#include<stdio.h>
main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++,m--)
    {
        for(k=m;k<n;k++)
        {
            printf(" ");

        }
        for(j=1;j<=m;j++)
        {
           printf("*");

        }

        printf("\n");
    }

}



