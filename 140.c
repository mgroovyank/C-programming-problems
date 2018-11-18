#include<stdio.h>
main()
{
   char a[100],b[100];
   int i=0;
   scanf("%s",&a);
   scanf("%s",&b);
   while(a[i]!='\0'&&b[i]!='\0')
  {
    if(a[i]==b[i])
    {
      i++;
    continue;
    }
    else
   {
       printf("different words");
       return 0;
   }
  }
   printf("same words");
}
