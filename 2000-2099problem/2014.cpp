/*
������ķ��������������ֵ����Сֵ��ȥ�������м������ƽ��ֵ
������ֵʱ�򣬿��Խ���һ��Ԫ�ظ���max,min������Ȼ������Ƚϣ������ֵ����max
��Сֵ����min, ����ȥ������ֵ����ƽ��ֵ 
*/

#include <stdio.h>
int main() {
	int i,n;
	double x,y,min,max;
	while(scanf("%d", &n) != EOF) 
	{
		scanf("%lf", &x);
		min = max = x;
		for(i=1; i<n; i++)   //��һ��ֵ�Ѿ����ܹ��ˣ��ӵڶ���ֵ��ʼѭ�� 
		{
			scanf("%lf", &y);
			x += y;
			if(y>max) max=y;
			if(y<min) min=y;
		} 
		printf("%.2lf\n", (x-min-max)/(n-2));
	}
	return 0;
} 












 
