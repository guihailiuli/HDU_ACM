/*
Àº¬∑£∫ 
≤Â»Î≈≈–Ú 
*/

#include <stdio.h>
int main() {
	int m,n,i;
	int a[101];
	while(scanf("%d%d", &n, &m) != EOF)
	{
		if(n==0 && m==0) 
		    break;
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(i=n; i>0&&a[i-1]>m; i--)
		{
			a[i]=a[i-1];
		}
		a[i]=m;
		for(i=0;i<n+1;i++)
		{
			printf("%d", a[i]);
			printf(i<n ? " " : "\n");
		}
	} 
	return 0;
}
















