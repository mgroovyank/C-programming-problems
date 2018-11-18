#include<stdio.h>
main()
{
    float x,y,i;
    printf("x                y          i\n");
    for(x=5.5,y=1;x<=12.5,y<=6;x+=0.5,y+=0.75)
    {
        i=2+y+0.5*x;
        printf("%f   %f   %f\n",x,y,i);
    }

}
