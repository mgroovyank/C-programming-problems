#include<stdio.h>
main()
{
    int m[3][3],i,p=0,j,s=0,c=6,d=3;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j&&m[i][j]!=0)
            {
               p++;
            }
           if(i==j&&m[i][j]==0)
            {
                p--;
            }
            if(i!=j&&m[i][j]!=0)
            {
                c--;
            }
        }
    }
    if(c!=6)
    {
        printf(" not diagonal matrix\n");
    }
    else if(p==3&&c==6)
    {
        printf(" diagonal matrix\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>=i&&m[i][j]!=0)
            {
               s++;
            }
            if(i>j&&m[i][j]!=0)
            {
                d--;
            }
        }
    }
    if(s==6&&d==3)
    {
        printf("upper triangular\n");
    }
    else if(d!=3)
    {
        printf("not upper triangular\n");
    }
}
