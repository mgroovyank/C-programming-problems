#include<stdio.h>
main()
{
    int i,j,p=1;
    for(i=2;i<=10;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                if(i-j==1)
                    p++;
                else
                    continue;
            }
            else if(i%j==0)
            break;



        }
    }
    printf("%d",p);
}
