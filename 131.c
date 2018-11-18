#include<stdio.h>
main()
{
    int n,i,a,b,c,d;
    for(n=1000;n<9999;n++)
    {
        a=n%10;
        b=(n/10)%10;
        c=((n/10)/10)%10;
        d=(((n/10)/10)/10)%10;
    if((a==b)&&(c==d)&&(b!=c))
    {


            for(i=0;i<n;i++)
        {
            if(n==i*i)
                printf("%d\n",n);

            else
                continue;
        }


        }
        else
            continue;

    }



}
