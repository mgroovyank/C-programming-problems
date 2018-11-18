#include<stdio.h>
main()
{
    int a,b,t,i,s=1;
    a=0;
    b=1;
    for(i=3;i<8;i++)
    {

        t=a+b;
        s=s+t;
        a=b;
        b=t;

        }
        printf("%d",s);

}
