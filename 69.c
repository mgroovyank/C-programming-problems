#include<stdio.h>
main()
{
    int y,t;
    scanf("%d",&y);
    t=((y-1990)*365)%7;
    if(t==0)
            printf("monday");
    if(t==1)
            printf("tuesday");
    if(t==2)
            printf("wednesday");
    if(t==3)
            printf("thursday");
    if(t==4)
            printf("friday");
    if(t==5)
            printf("saturday");
    if(t==6)
            printf("sunday");

}
