#include<stdio.h>
main()
{
    int n,i,a,b,c,d,j,k;
    for(n=1000;n<9999;n++)
    {
        a=n%100;
        b=n/100;

          for(j=0;j<a;j++)
          {
              if(a==j*j)
              {
                  for(k=0;k<b;k++)
                  {
                      if(b==k*k)
                      {

                          for(i=0;i<n;i++)
        {
            if(n==i*i)
                printf("%d\n",n);

            else
                continue;
                      }
                  }
              }
          }





        }


    }



}
