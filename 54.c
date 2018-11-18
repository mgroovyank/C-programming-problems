#include<stdio.h>
main()
{
  int n,N=0,s;
  scanf("%d",&n);
  while(n!=0)
  {
      N=N*10+n%10;
      n=n/10;

  }
  printf("enter the same number");
  scanf("%d",s);
  if(N==s)
  printf("palindrome");

}











