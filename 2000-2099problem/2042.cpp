/*
思路：

老汉有N只羊，每过一个收费站就变为 N/2+1只羊，过了a个收费站后，最后只能下3只羊 
N
...
((3-1)*2-1)*2
(3-1)*2
3
*/

#include <stdio.h>
int main() {
	int n,a;
	int i,num;
	scanf("%d", &n);
	while(n-- && scanf("%d", &a))
	{
		num=3;
		for(i=1;i<=a;i++)
		{
			num = (num-1)*2;
		}
		printf("%d\n", num);
	}
	return 0;
} 














