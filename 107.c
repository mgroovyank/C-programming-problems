#include<stdio.h>
main()
 {

char color;
int n;
scanf("%d",&n);
color=1<<n;
if(n==0 && color==1)
printf("Violet");
else if(n==1 && color==2)
printf("Indigo");
else if(n==2 && color==4)
printf("Blue");
else if(n==3 && color==8)
printf("Green");
else if(n==4 && color==16)
printf("Yellow");
else if(n==5 && color==32)
printf("Orange");
else if(n==6 && color==64)
printf("Red");
}
