/*
思路： 
十进制数转换成R进制数， 

*/

#include <stdio.h>
void conversionR(int n, int r){
	if(n)
	{
		conversionR(n/r, r);
		printf("%c", n%r>9 ? n%r-10+'A' : n%r+'0');
	}
}

int main() {
	int n,r;
	while(scanf("%d%d", &n,&r) != EOF && r>=2 && r<=16)
	{
		if(n>0)
		{
			conversionR(n,r);
			printf("\n");
		}else if(!n)
		{
			putchar('0');
			printf("\n");
		}else
		{
			putchar('-');
			conversionR(-n,r);
			printf("\n");
		}
	}
} 
























