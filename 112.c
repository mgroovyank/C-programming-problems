#include<stdio.h>
int bs(int ,int ,int ,int[]);
main()
{
    int a[]={1,2,3,4,5},x=4,s;
    s=bs(x,0,4,a);
    (s==-1)?printf("not present"):printf("%d",s);

}
int bs(int x,int l,int h,int a[])
{
    if(h>=l)
    {
       int m;
    m=(h+l)/2;
    printf("%d\n",m);
    if(a[m]==x)
        return m;
    else if(a[m]>x)
        return bs(x,0,m-1,a);
    else if(a[m]<x)
        return bs(x,m+1,4,a);
    }
    return -1;
}
