#include<stdio.h>
main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(k=1;k<=m;k++)
        {
            printf(" ");
            m--;
        }
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
    }

}



/*int main()
{
    int i, j, k,n;
    scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=5;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/














