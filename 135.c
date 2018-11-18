#include<stdio.h>
main()
{
    int m[10],i;
    float a=0;
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&m[i]);
        a=a+m[i];
    }
    printf("average=%f",a/10);


}
