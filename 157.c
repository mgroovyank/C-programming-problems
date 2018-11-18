#include<stdio.h>
main()
{
    char a[5];
    scanf("%s",&a);
    int i,n,l;
    scanf("%d%d",&n,&l);
    i=n-1;
    while(a[i]!=a[l])
   {
       printf("%c",a[i]);
       i++;

    }

}
