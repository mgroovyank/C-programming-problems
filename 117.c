#include<stdio.h>
main()
{
    int i,j,k,l;
    int arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<5;j++)
    {
       if(arr[j]!=0)
       {
           for(k=j+1;k<5;k++)
        {
            if(arr[k]%arr[j]==0)
            {
                arr[k]=0;
                }


        }
    }



       }
         for(l=1;l<5;l++)
         {
             printf("%d\n",arr[l]);
         }
}
