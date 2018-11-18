#include<stdio.h>
main()
{
    int a=4,b=1,i;
    for(i=3;i>=0;i--)
    {
       printf("%d",a&b<<i?1:0);
    }


}
