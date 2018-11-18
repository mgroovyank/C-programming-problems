#include<stdio.h>
main()
{
    int i,j,s=1,k;
    for(i=1;i<5;i++,printf("\n"))
    {
        for(k=i;k<4;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++,printf(" "))
        {
            printf("%d",s);
            s++;


        }

    }
}
