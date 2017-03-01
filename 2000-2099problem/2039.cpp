/*
判断三条边能否构成三角形: a+b>c && a+c>b && b+c>a

*/
#include <stdio.h>
int main(){
	int m;
	double a,b,c;
	scanf("%d", &m);
	while (m-- && scanf("%lf%lf%lf", &a,&b,&c))
	{
		printf(a+b>c && a+c>b && b+c>a ? "YES\n" : "NO\n");
	}
	return 0;
}










 
