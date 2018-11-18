#include<stdio.h>
main()
{
    int i=0;
    char a[10];
    printf("enter in lower case");
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        a[i]=a[i]-32;
        i++;
    }
    printf("%s",a);
}
