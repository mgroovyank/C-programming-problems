#include<stdio.h>
main()
{
    float i,b=1,a,j,s;
    for(i=1;i<8;i++)
    {
        a=i;
        j=i;
        do
        {
            b=b*j;
            j--;

        }
        while(j!=0);
        s=s+a/b;
    }
         printf("%f",s);

}
