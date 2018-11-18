#include<stdio.h>
main()
{
    int h,m,s,i;
    scanf("%d%d%d",&h,&m,&s);
    for(i=4;i>=0;i--)
    {
        printf("%d",h&1<<i?1:0);
    }
    for(i=5;i>=0;i--)
    {
        printf("%d",m&1<<i?1:0);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d",s&1<<i?1:0);
    }

}
