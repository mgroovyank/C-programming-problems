#include<stdio.h>
main()
{
    char a[5],b[5],c[9];
    scanf("%s%s",&a,&b);
    int i=0,j=0;
    while(i!=4)
    {
        c[i]=a[i];
        i++;
    }
    printf("%d\n",i);
    while(j!=4)
    {
        c[i]=b[j];
        j++;
        i++;
    }
    for(i=0;i<8;i++)
    {
        printf("%c",c[i]);
    }
}
