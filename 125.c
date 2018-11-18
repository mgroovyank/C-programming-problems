#include<stdio.h>
main()
{
    int i,j,k,l,m[3][3],s;
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
            for(k=i;k<3;k++)
            {
                for(l=0;l<3;l++)
                {
                    if(m[k][l]>m[i][j])
                    s=m[i][j];
                    m[i][j]=m[k][l];
                    m[k][l]=s;

                }
            }
        }
    }
              for(i=0;i<3;i++,printf("\n"))
           {
               for(j=0;j<3;j++)
             {
               printf("%d ",&m[i][j]);
             }
           }
}
