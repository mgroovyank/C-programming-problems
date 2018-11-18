#include<stdio.h>
main()
{
   int arr[25],n,count=0;
   printf("enter 25 numbers");
   for(int i=0;i<25;i++)
   {
      scanf("%d",&arr[i]);

   }
    printf("enter the number to find");
     scanf("%d",&n);
       for(int x=0;x<25;x++)
         {
            if(arr[x]==n)
            {
             printf("%d\n",n);
             count++;
             }



         }
           printf("%d",count);
   }
