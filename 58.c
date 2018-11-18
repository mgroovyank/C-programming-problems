#include<stdio.h>
#include<math.h>
main()
{
   float a,b;
   scanf("%f%f",&a,&b);
   if(b==0&&a!=0)
    printf("on x axis");
   else if(a==0&&b!=0)
    printf("on y axis");
   else if(a==0&&b==0)
    printf("origin");
   else
    printf("no case");

}











