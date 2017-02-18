/*
调用Math库，球体积公式：V=4.0 * PI * r*r*r / 3.0

*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415927

int main() {
	double r;
	while(scanf("%lf", &r) != EOF) 
	{
		printf("%.3lf\n", 4.0*PI*r*r*r/3);
	}
	return 0;
}



