/*
̰�ģ�
�����������ֵ100����Ҫ����������money/100���õ�100Ԫ������
ͬ���ķ������εõ�50��10��5��2��1��������
�ۼ� 

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


















