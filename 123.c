#include<stdio.h>
main()
{
    int i,j,a[3][3],b[3][3],c[3][3],k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++,printf("\n"))
    {
        for(j=0;j<3;j++)

        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[j][i];

            }
            printf("%d",c[i][j]);

        }
    }

}
