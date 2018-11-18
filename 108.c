#include<stdio.h>
main()
 {
     int game,n;
     scanf("%d",&game);
     n=1<<game;
     if(game==0&&n==1)
printf("loser");
else if(game==1&&n==2)
printf("loser");
else if(game==2&&n==4)
printf("loser");
else if(game==3&&n==8)
printf("loser");
else if(game==4&&n==16)
printf("loser");
else if(game==5&&n==32)
printf("champ");
else if(game==6&&n==64)
printf("champ");
else if(game==7&&n==128)
    printf("champion");
}
