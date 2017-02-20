/*
思路： 

怎样接受一行行的字符串
怎样分辨哪是字符哪是数字
用\n来判断行末 
通过ascii码分辨是否是数字，1的ascii是48，9的ascii码是57 
循环遍历统计数字 

*/
#include <stdio.h>
#include <string.h>
int main() {
	int n;
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		int i, count;
		while(n--)
		{
			count=0;
			char str[1000];
			int len;
		    //gets()函数从流中读取字符串，直到出现换行符或读到文件尾为止，最后加上NULL作为字符串结束。
			gets(str);
			len=strlen(str);   //strlen取得该字符串的长度 
			for(i=0; i<len; i++)
			{
				if(str[i]>=48 && str[i]<=57)    //通过ascii码判断是否是数字 
				    count++;
			}
			printf("%d\n", count);
		}
	} 
	return 0;
} 









