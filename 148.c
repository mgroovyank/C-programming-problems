#include<stdio.h>
main()
{
    int i=0,n=0;
    char a[10];
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        n++;
        i++;
    }
    printf("%d",n);
}
