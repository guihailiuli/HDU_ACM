/*
思路： 

内部码：计算机内部处理(存储，传输，识别)汉字的编码，又叫机内码，它是双字节编码 
汉字占双字节，高位字节里都是<0，所以只需统计小于0的字符的个数  然后将总的字节数/2就是汉字的个数 
*/ 


 #include <stdio.h>
 #include <string.h> 
 
 int main(){
 	int n,count;
 	char ch;
 	scanf("%d\n", &n);
 	while(n--)
 	{
 		count = 0;
 		while((ch=getchar()) != '\n')
 		{
 			if(ch<0)
 			    count++;
 		}
 		printf("%d\n", count/2);
 	}
 	return 0;
 } 





















