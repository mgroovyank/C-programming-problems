#include<stdio.h>
main()
{
   int arr[25],p=0,n=0,e=0,o=0;
   printf("enter 25 numbers");
   for(int i=0;i<25;i++)
   {
      scanf("%d",&arr[i]);    
   
   }
    for(int x=0;x<25;x++)
         {
            if(arr[x]>0)
            { 
             p++;
             }
             if(arr[x]<0)
             {
               n++;
             }
              if(arr[x]%2==0)
             {
               e++;
             }
              if(arr[x]%2!=0)
             {
               o++;
             }
             
          }
           printf("postive=%d\n",p);
           printf("negative=%d\n",n);
           printf("even=%d\n",e);
           printf("odd=%d",o); 
           }
   
  
