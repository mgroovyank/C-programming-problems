#include<stdio.h>
main()
{
    int x,y,s=1,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        s=s*x;
    }
    printf("%d",s);
}
