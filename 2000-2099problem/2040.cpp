/*
思路： 
约数： 整数 a 除以整数 b 除得的商正好是整数而没有余数，即a能被b整除，b是a的约数
 
*/


#include <stdio.h>
int isQinheshu(int n){
	int i,sum=1;
	for(i=2; i<=n/2; i++)
	{
		if(n%i == 0)   //i是n的约数 
		{
			sum+=i;
		}
	}
	return sum;
}
int main() {
	int m,a,b;
	scanf("%d", &m);
	while(m-- && scanf("%d%d", &a, &b)) 
	{
		printf(isQinheshu(a)==b && isQinheshu(b) == a ? "YES\n" : "NO\n");
	}
}












