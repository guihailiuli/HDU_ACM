/*
思路： 
输入两个整数x和y，输出这两个数之间的连续的整数中所有偶数的平方和以及所有奇数的立方和
首先是判断x和y的大小关系，若x大于y，则交换，使得连续整数保持升序
然后循环，求和 

*/

#include <stdio.h>
int main() {
	int x, y, i, sum1,sum2;
	while(scanf("%d %d", &x, &y) != EOF) 
	{
		if(x>y){
			int temp = y;
			y = x;
			x = temp;
		}
		sum1 = sum2 = 0;
		for(i=x; i<=y; i++) {
            (i&1) ? (sum1 += i*i*i) : (sum2+=i*i);
		}
		printf("%d %d\n", sum2, sum1);
	}
}

