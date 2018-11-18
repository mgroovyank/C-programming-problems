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
        if(i==1)
        for(j=1;j<=m;j++)
        {
           printf("%d",j);

        }
        if(i==2)
        {
            for(j=1;j<=m;j++)
                printf("%d",n+j);

        }
        if(i==3)
        {
            for(j=1;j<=m;j++)
                printf("%d",2*n+j-1);
        }
        if(i==4)
        {
            printf("0");
        }





        printf("\n");
    }


}




