#include <stdio.h>
#include <stdlib.h>


void main()
{
	int n;
	int a;
	int i;
	int aa[31];
	scanf("%d",&n);
	aa[0] = 3;
	for(i=1; i <= 30; i++)
	{
		aa[i] = 2 * (aa[i-1] - 1);
	}
	while(n--)
	{
		scanf("%d",&a);

		printf("%d\n",aa[a]);
	}
}
