#include<stdio.h>
#include<math.h>
main()
{
    float r,x,y,m,d,i,j;
    scanf("%f",&r);
    m=pow(x,2)+pow(y,2);
    d=pow(m,0.5);
    for(x=0;x<r;x++)
    {
        for(y=0;y<r;y++)
        {

            if(d<r)
                printf("%f %f\n",x,y);
        }
    }
    for(i=0;i>-r;i--)
    {
        for(j=0;j>-r;j--)
        {

            if(d<r)
                printf("%f %f\n",i,j);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j>-r;j--)
        {

            if(d<r)
                printf("%f %f\n",i,j);
        }
    }
     for(i=0;i>-r;i--)
    {
        for(j=0;j<r;j++)
        {

            if(d<r)
                printf("%f %f\n",i,j);
        }
    }
}
