/*
贪心，
先求出最大的面值100所需要的张数，即money/100，得到100元的张数
同样的方法依次得到50，10，5，2，1的张数，
累加 

*/

#include <stdio.h>
int main() {
	int n,i,money,x;
	while(scanf("%d", &n) && n!=0)
	{
		x=0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &money);
			x += money/100;
			money %= 100;
			x += money/50;
			money %= 50;
			x += money/10;
			money %= 10;
			x += money/5;
			money %= 5;
			x += money/2;
			money %= 2;
			x += money;
			
		}
		printf("%d\n", x);
	}
	return 0;
} 


















