#include<stdio.h>
main()
{
    char a[5],b[5],c[9];
    scanf("%s%s",&a,&b);
    int i=0,j=0,n;
    while(i!=4)
    {
        c[i]=a[i];
        i++;
    }
    scanf("%d",&n);
    while(j!=n)
    {
        c[i]=b[j];
        j++;
        i++;
    }
    for(i=0;i<4+n;i++)
    {
        printf("%c",c[i]);
    }
}
