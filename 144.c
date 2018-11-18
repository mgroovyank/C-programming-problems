#include<stdio.h>
main()
{
    char a[100],b;
    int i=0;
    scanf("%s\n",&a);
    scanf("%c",&b);
    while(a[i]!='\0')
    {
        a[i]=b;
        i++;
    }
    printf("%s",a);
}
