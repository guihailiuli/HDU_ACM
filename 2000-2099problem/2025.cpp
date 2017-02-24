/*
思路：
通过gets()函数接受字符串， 遍历找其中最大值max
通过putchar()函数输出字符串，在输出时判断该字符串是否和max相同，若是，在后面添加(max) 

*/


#include <stdio.h>
int main(){
	char str[100];
	char max;
	int i;
	while(gets(str))
	{
		max = 0;
		for(i=0; str[i]; i++)
		{
			if(str[i] > max)
			{
				max = str[i];
			}
		}
		for(i=0; str[i]; i++)
		{
			putchar(str[i]);
			if(str[i] == max)
			{
				printf("%s", "(max)");
			}
		}
		printf("\n");
	}
	return 0;
}
