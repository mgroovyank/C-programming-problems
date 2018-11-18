#include<stdio.h>
main()
{
    char a[100],b[50];
    int i=0,j=0;
    scanf("%s\n",&a);
    scanf("%s",&b);
    while(a[i]!='\0'&&b[j]!='\0')
    {
        if(a[i]==b[j])
        {
           i++;
           j++;
           if(b[j]=='\0')
           {
               printf("word found");
               return -1;
           }
        }
        else
        {
            j=0;
            i++;
        }
    }
    printf("word not found");
}
