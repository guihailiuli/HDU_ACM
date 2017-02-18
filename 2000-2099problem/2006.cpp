/*
思路：

对输入的n个整数进行遍历，当第i个整数为偶数时候跳过，当为奇数时候与前一个数字相乘 
最后输出相乘的积 
*/

#include <stdio.h>
int main() {
	int i, n;
	while(scanf("%d", &n) != EOF) {
		int chengJi=1, num;
		while(n--) 
		{
			scanf("%d", &num);
			//if(num%2!=0)
			if(num & 1)  //判断num的最低位是否为1，等价于 num&1 == 1 
			{
				chengJi *= num;
			}
		}
		printf("%d\n",chengJi);
	}
	return 0;
} 



 
