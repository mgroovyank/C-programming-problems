#include<stdio.h>
main()
{
    int i=0,n;
    scanf("%d",&n);
    char a[100],b[n];
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        b[i]=a[n-1];
        i++;
        n--;
    }
    printf("%s",b);
}
