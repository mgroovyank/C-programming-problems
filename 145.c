#include<stdio.h>
main()
{
    char a[100],b;
    int i=0,n;
    scanf("%d",&n);
    scanf("%s\n",&a);
    scanf("%c",&b);
    while(i!=n)
    {
        a[i]=b;
        i++;
    }
    printf("%s",a);
}
