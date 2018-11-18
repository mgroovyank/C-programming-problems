#include<stdio.h>
main()
{
    int t,i;
    printf("enter the number of working hours");
    scanf("%d",&t);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",(t-40)*12);
    }
}
