#include<stdio.h>
main()
{
    char a[5],b[5];
    scanf("%s%s",&a,&b);
    int i=0;
    while(a[i]!='\0')
   {
    if(a[i]==b[i])
    {
        i++;
    }
    else
    {
        printf("not same");
        return 0;
    }
    }
    printf("same strings");
}
