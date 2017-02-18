#include <stdio.h>
int main() {
	double x;
	while(scanf("%lf", &x) != EOF)
	{
		x >= 0 ? printf("%.2lf\n", x) : printf("%.2lf\n", -x);
	}
	return 0;
}
