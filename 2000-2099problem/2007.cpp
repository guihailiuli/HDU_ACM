/*
˼·�� 
������������x��y�������������֮�������������������ż����ƽ�����Լ�����������������
�������ж�x��y�Ĵ�С��ϵ����x����y���򽻻���ʹ������������������
Ȼ��ѭ������� 

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

