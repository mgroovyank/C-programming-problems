#include<stdio.h>
main()
{
   char a[10],b;
   int i=0;
   scanf("%s\n%c",&a,&b);
   while(a[i]!='\0')
  {
    if(a[i]==b)
    {
       printf("position=%d",i+1);
       i++;
    }

    else
    {
        i++;
        continue;
    }
  }

}
