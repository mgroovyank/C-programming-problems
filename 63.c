#include<stdio.h>
main()
{
    int a,i,l,s,n;
    scanf("%d",&n);
    for(i=0;i<1;i++)
    {
        scanf("%d",&a);
        l=a;
        s=a;
    }
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a>l)
            l=a;
        else if(a>l)
            s=a;
    }
    printf("%d",l-s);



}
