#include<stdio.h>
#include<math.h>
main()
{
    float i,p,r,n,q,a;
    for(i=1;i<=10;i++)
    {
        scanf("%f%f%f%f",&p,&r,&n,&q);
        a=p*pow((1+r/q),n*q);
        printf("%f",a);
    }
}
