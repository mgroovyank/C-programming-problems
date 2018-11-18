#include<stdio.h>
main()
{
    int i,j,n,m,l,s;
    scanf("%d",&n);
    m=n;
    s=n;
    for(i=1;i<=n;i++,m--)

    {
        if(i<=(n+1)/2)
        {
            for(j=1;j<=i;j++)
        {
            printf("*");
        }
        }
        if(i>(n+1)/2)
        {

            for(l=(n+3)/2;l<=s;l++)
               {
                 printf("*");
               }
               s--;

        }


        printf("\n");

    }


}




