/*
思路：
通过strlen得到输入字符串的长度，i从头开始，j从尾开始，依次比较是否相等，
若有不相等则跳出循环，然后比较i和j的大小，若 i<j ，说明某个循环某个地方不相等，即不是回文串 

*/ 

#include <stdio.h>
#include <string.h>
int main() {
	int n,i,j;
	int flag,len;
	char arr[100];
	scanf("%d\n", &n);
	while(n--)
	{
		gets(arr);
		len=strlen(arr);
		for(i=0, j=len-1; i<j; i++,j--)
		{
			if(arr[i] != arr[j])
				break;
		}
		printf(i>=j ? "yes\n" : "no\n");
	}
	return 0;
} 















