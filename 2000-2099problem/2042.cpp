/*
˼·��

�Ϻ���Nֻ��ÿ��һ���շ�վ�ͱ�Ϊ N/2+1ֻ�򣬹���a���շ�վ�����ֻ����3ֻ�� 
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














