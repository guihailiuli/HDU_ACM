/*
思路：
 在数组中寻找最小值，只需记住最小值的下标就可以了，
 在输出时候，数字之间的空格通过n的个数来判断，若不到最后一个，用空格，到最后一个用换行 

*/
#include <stdio.h>
void swap(int &m, int &n) {
	int temp=m;
	m=n; 
	n=temp;
}
int main() {
	int i,m,n,num[100];
	while(scanf("%d", &n) != EOF) 
	{
		m=0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &num[i]);
			if(num[i]<num[m]) 
			    m=i;
			    
		}
		swap(num[m], num[0]);
		for(i=0; i<n; i++)
		{
			printf("%d", num[i]);
			printf(i<n-1 ? " " : "\n");
		}
	}
	return 0;
}










