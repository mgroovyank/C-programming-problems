#include<stdio.h>
main()
{
   int i,j,k,l;
   for(l=1;l<=5;l++)
   {
       for(i=1;i<=5;i++)
       {
           for(j=1;j<=5;j++)
           {
               for(k=1;k<=5,i+j+k==l;k++)
               {
                   printf("%d%d%d%d\n",i,j,k,l);
               }
           }
       }
   }
}
