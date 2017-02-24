/*
Ë¼Â·£º 

*/

#include <stdio.h>
int main() {
	int a,b,sum;
	while(scanf("%d %d", &a, &b) != EOF && a!=0 && b!=0)
	{
		sum = 1;
		while(b--)
		{
			sum = (sum*a)%1000;
		}
		printf("%d\n", sum%1000);
	}
	return 0;
} 



















