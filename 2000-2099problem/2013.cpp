/*
˼·��
��n��ֻʣ1�����ӣ�
��n-1��ʣ��(1+1)*2=4��
��n-2��ʣ��(4+1)*2=10�� 
 
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



