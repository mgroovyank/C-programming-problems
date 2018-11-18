#include<stdio.h>
main()
{
   int i,j,k,arr[5]={8,3,5,7,2};
   for(i=0;i<5;i++)
   {
       for(j=i+1;j<5;j++)
       {
           if(arr[j]>arr[i])
           {
             k=arr[i];
             arr[i]=arr[j];
             arr[j]=k;
           }
       }
   }
   for(i=0;i<5;i++)
   {
      printf("%d\n",arr[i]);
   }

}
