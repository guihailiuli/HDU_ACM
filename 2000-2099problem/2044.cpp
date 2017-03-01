/*
思路： 
一只蜜蜂可以往下一位数字走，也可以往右边的走，
即处在a[i]位置的蜜蜂，可以往a[i+1]处走，也可以往a[i+2]处的地方走 
这个和前面一道题的走楼梯一样，相当于走1步，或者连走2步 ，
然后计算从某个地方(b)走到另一个地方(a)可能的走的方法数量 

*/ 
#include <stdio.h>
int main() {
	int i,n,a,b;
	//数值很大时候，使用__int64 
	__int64 path[51] = {1,1,2,};
	for(i=3; i<51; i++)
	{
		path[i] = path[i-1]+path[i-2];
	}
	scanf("%d", &n);
	while(n-- && scanf("%d %d", &a, &b)!=EOF)
	{
		printf("%I64d\n", a > b ? 0 : path[b-a]);
	}
	return 0;
} 









