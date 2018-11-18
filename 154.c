#include<stdio.h>
main()
{
    char a[5],b[5],c[5];
    scanf("%s", &a);
    scanf("%s",&b);
    int i=0;
    while(i!=4)
    {
        c[i]=a[i];
        i++;
    }
    i=0;
    while(i!=4)
    {
        a[i]=b[i];
        i++;
    }
    i=0;
    int n;
    scanf("%d",&n);
    while(i!=n)
    {
        b[i]=c[i];
        i++;
    }
    printf("%s\n",a);
    printf("%s",b);
    }
