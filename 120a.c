#include<stdio.h>
int pointer(int *);
main()
{
    int arr[5]={19,18,23,54,95},s;
    int *p=&arr[1];
    pointer(p);
}
int pointer(int *p)
{
    printf("%d",p);
}
