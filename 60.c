#include<stdio.h>
main()
{
    int user,computer,remaining=21;
    printf("there are total 21 matchsticks.\nyou can pick only 1 or 2 or 3 or 4 matchsticks at a turn\n");

   do{
        printf("user pick\n");
      scanf("%d",&user);
      remaining=remaining-user;
      printf("remaining matchsticks are %d\n",remaining);
      printf("computer pick\n");
      computer=remaining-1;
      printf("computer picked %d matchsticks\n",computer);
      remaining=remaining-computer;
      printf("remaining matchsticks are %d\n",remaining);
      printf("user pick\n");
      scanf("%d",&user);
      if(user>remaining)
        {
            printf("exceeding the limit\n");
            printf("renter the appropriate number of matchsticks");
            scanf("%d",&user);

            }




      remaining=remaining-user;
      printf("remaining matchsticks are %d\n",remaining);

   }

     while(remaining!=0);
        printf("computer wins");

}
