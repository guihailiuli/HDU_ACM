/*
思路： 
调用math库，勾股定理 

*/

#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, x2, y2;
	while(scanf("%f %f %f %f", &x1, &y1, &x2, &y2) != EOF) 
	{
		printf("%.2f\n", sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
	}
	return 0;
} 







