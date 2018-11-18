#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d=d+pow(c,3);


    }
    printf("%d",d);
    if(d==a)
        printf("armstrong");
    else
        printf("not armstrong");
}











