#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,odddays,weeks;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    g=(a-d)*365;
    h=(b-e)*30;
    i=c-f;
    odddays=(g+h+i)%7;
    weeks=(g+h+i)/7;
    printf("%d",odddays);

}











