/*
思路：
第n天只剩1个桃子，
第n-1天剩下(1+1)*2=4个
第n-2天剩下(4+1)*2=10个 
 
*/

#include<stdio.h>
int main() {
	int n,i;
	while(scanf("%d", &n) != EOF) 
	{
		if(n<=1 && n>=30) 
		{
			break;
		}
		int sum=1;
		n-=1;
		while(n--)
		{
			sum = (sum+1)*2;
		}
		printf("%d\n", sum);
	}
	return 0;
} 



