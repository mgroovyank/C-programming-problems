#include<stdio.h>
main()
{
    int arr[5]={19,18,23,54,95};
    int *a,s,i;
    a=&arr[1];
    s=*a;
    for(i=0;i<4;i++,a++)
    {
        if(s>=a)
            s=*a;
        else if(s>a)
            continue;
    }
    printf("%d",s);

}
