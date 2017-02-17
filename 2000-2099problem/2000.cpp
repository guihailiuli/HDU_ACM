#include<stdio.h>
int main()
{
	int i,j;
	char m,a[3];
	while(gets(a))
	{
		for(i=0;i<=2;i++)
			for(j=0;j<2-i;j++)
			{
				if(a[j]>a[j+1])
				{
				 m=a[j];
				 a[j]=a[j+1];
				 a[j+1]=m;					
				}
			}
			printf("%c %c %c\n",a[0],a[1],a[2]);
	}
	return 0;
}