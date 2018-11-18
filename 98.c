#include<stdio.h>
main()
{
    int i,j,m,l,n=7,x,y,z=6,s=70;
    printf("ABCDEFGFEDBCBA\n");
    for(i=0;i<6;i++)
    {
        for(j=1,m=65;j<n;j++)
        {
            printf("%c",m);
            m++;
        }
        for(x=-1;x<=2*i;x++)
        {

            printf(" ");
        }
        l=s;
        for(y=0;y<z;y++)
        {
            printf("%c",l);
            l--;
        }
        printf("\n");
        n--;
        z--;
        s--;


    }
}

