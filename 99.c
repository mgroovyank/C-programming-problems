#include<stdio.h>
main()
{
    int i,j,s=7,l=3,k;
    for(i=0;i<4;i++,s=s-2)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=0;k<s;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i<7;i++,l=l+2)
    {
        for(j=0;j<6-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<l;k++)
        {
            printf("*");
        }
        printf("\n");
    }

}
