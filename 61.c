#include<stdio.h>
main()
{
    int i,r,p=0,n=0,z=0,a;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a);
        if(a>0)
            p++;
        else if(a<0)
            n++;
        else z++;
    }
    printf("positive %d\n",p);
    printf("negative %d\n",n);
    printf("zero %d",z);
}
