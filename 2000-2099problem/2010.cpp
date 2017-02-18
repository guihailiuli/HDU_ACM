/*
思路： 
遍历在m到n这个范围内的三位数，将每个数的百位，十位，个位分开后，再分别立方求和判断是否是它本身
若是其本身，则输出，并标志有水仙花数(i=1)，然后进行下一个三位数的判断，否则，不输出，进行下一个判断

*/

#include<stdio.h>
int main() {
	int m,n,i;
	while(scanf("%d %d", &m, &n) != EOF && m>=100&&m<=n&&n<=999) {
		i=0;
		for(;m<=n;m++) 
		{
			int a=m/100,
			    b=m%100/10,
			    c=m%100%10;
			if(m==a*a*a+b*b*b+c*c*c) {
				if(i>0) printf(" ");
				printf("%d",m);
				i=1;
			}
		}
		printf(i ? "\n" : "no\n");
	}
	return 0;
} 




 
