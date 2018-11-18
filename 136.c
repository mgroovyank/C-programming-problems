#include<stdio.h>
main()
{
    int i,j,a[3][3],b[3][3],c[3][3],u;
    printf("add or subtract");
    scanf("%c",&u);
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
            if(u=='a')
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            else if(u=='s')
            {
                c[i][j]=a[i][j]-b[i][j];
            }

            printf("%d",c[i][j]);
        }
    }

}
