/*
思路:
调用math库，遍历，求和 
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
		m--;  //第一项已经赋给sum，所以前m项应该减去1 
		while(m--) {
			n = sqrt(n);
			sum += n;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}







