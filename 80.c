#include<stdio.h>
main()
{
    int i,j,n,m;
    scanf("%d",&n);
    m=n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           printf("%d",j);

        }

        printf("\n");
        m--;

    }

}



