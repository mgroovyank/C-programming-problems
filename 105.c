#include<stdio.h>
main()
{
    int a=2,b=3,c;
    c=a^b;
    a=a^c;
    b=b^c;
    printf("a=%d\nb=%d",a,b);
}
