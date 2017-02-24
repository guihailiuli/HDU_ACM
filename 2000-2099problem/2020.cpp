/*
数组加选择排序/冒泡排序 

*/

#include <stdio.h>
int abs(int m){
    return m>0 ? m : -m;
} 

int main() {
	int n,i,j;
	int a[100];
	while(scanf("%d", &n) && n!=0)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(i=0; i<n-1; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(abs(a[i]) < abs(a[j]))
				{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0; i<n; i++)
		{
			printf("%d", a[i]);
			printf(i<n-1 ? " " : "\n");
		}
		
	}
	return 0;
}













