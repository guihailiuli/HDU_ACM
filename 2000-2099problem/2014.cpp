/*
在输入的分数数组中找最大值和最小值，去掉后求中间的数的平均值
在找最值时候，可以将第一个元素赋给max,min变量，然后遍历比较，把最大值存入max
最小值存入min, 最后减去这两个值后求平均值 
*/

#include <stdio.h>
int main() {
	int i,n;
	double x,y,min,max;
	while(scanf("%d", &n) != EOF) 
	{
		scanf("%lf", &x);
		min = max = x;
		for(i=1; i<n; i++)   //第一个值已经接受过了，从第二个值开始循环 
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












 
