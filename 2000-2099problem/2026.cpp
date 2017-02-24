/*
思路： 
判断单词的首字母， 首先判断当前字符是字母，然后当前字符的前一个字符是空格，若是则大写 
对于字符串的第一个字符，可以保存前一个字符的变量为空格，
即保存字符串的数组的第一个为空格，读取字符串后从第二个开始保存 

*/

#include <stdio.h>
#include <ctype.h>
int main(){
	int i;
	char str[101] = {" "};   //将数组第一个置为空 
	while(gets(str+1))
	{
		for(i=1; str[i]; i++)
	    {
			putchar( (isalpha(str[i]) && str[i-1]==' ') ? toupper(str[i]) : str[i] );
		} 
		printf("\n");
		
	}
	return 0;
}
























