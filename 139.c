#include<stdio.h>
main()
{
    int i,y,m,s=1,d,j;
    char mt[10];
    scanf("%d%d",&y,&m);
    scanf("%s",mt);
    d=((y-1900)*365+(m-1)*30)%7;
    printf("%s",mt);
    printf(" %d\n",y);
    printf("mon tue wed thu fri sat sun\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<7&&s<31;j++,s++)
        {
            if(i==0&&j==0)
               {
                j=d;
                }
                if(d==0)
                   {
                     printf("");
                   }
                else if(d==1)
                   {
                      printf(" ");
                   }
                else if(d==2)
                   {
                       printf("  ");
                   }
                else if(d==3)
                   {
                      printf("   ");
                   }
                else if(d==4)
                    {
                       printf("    ");
                    }
                else if(d==5)
                   {
                     printf("     ");
                   }
                else if(d==6)
                {
                    printf("      ");
                }
                printf("%d",s);


            }
            printf("\n");


        }
    }

