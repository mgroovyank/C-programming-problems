#include<stdio.h>
main()
{
    int i,s=1,t=1;
    for(i=1;i<7;i++)
    {
        t=t+2;
        s=s+t;
    }
    printf("%d",s);


}
