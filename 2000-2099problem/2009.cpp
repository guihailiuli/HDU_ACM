/*
˼·:
����math�⣬��������� 
*/

#include <stdio.h>
#include <math.h>

int main() {
	int m;
	double n;
	while(scanf("%lf %d", &n, &m) != EOF) 
	{
		double sum=0.0;
		sum=n;
		m--;  //��һ���Ѿ�����sum������ǰm��Ӧ�ü�ȥ1 
		while(m--) {
			n = sqrt(n);
			sum += n;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}







