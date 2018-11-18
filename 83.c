#include <stdio.h>
main()
 {
	int i,j,k,l=1,n;
	scanf("%d",&n);
	for (i=1; i<=(n+1)/2; i++,l++,printf("\n"))
        {
		for (k=l; k<(n+1)/2; k++)
		 {
			printf(" ");
		}
		for (j=1; j<=2*i-1; j++)
        {
			printf("*");
		}

	}
	l=1;
	for (i=(n+1)/2; i>1; i--)
        {
		for (k=l; k>0; k--)
		{
			printf(" ");
		}
		for (j=2*i-1; j>1; j--)
		{
			printf("*");
		}
		l++;
		printf("\n");
	}

}
