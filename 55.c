#include <stdio.h>

main()
{
  int a, b, x, y, t,hcf, lcm;
  scanf("%d%d", &x, &y);
  a = x;
  b = y;
  while (b!= 0)
  {
    t=b;
    b=a%b;
    a=t;
  }

  hcf=a;
  lcm=(x*y)/hcf;

  printf("highest common factor of %d and %d = %d\n", x, y, hcf);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);


}











