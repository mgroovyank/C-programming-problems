#include<stdio.h>
main(){
   struct part{
       char serialNo[3];
       int yearManufacture;
       int quantity;
   }parts[3];
   int i;
   for(i=0;i<3;i++){
      scanf("%s%d%d",&parts[i].serialNo,&parts[i].yearManufacture,&parts[i].quantity);
   }
   for(i=1;i<3;i++){
      printf("%s %d %d",parts[i].serialNo,parts[i].yearManufacture,parts[i].quantity);
      printf("\n");
   }


}
