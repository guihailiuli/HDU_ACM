/*
˼·�� 

�ڲ��룺������ڲ�����(�洢�����䣬ʶ��)���ֵı��룬�ֽл����룬����˫�ֽڱ��� 
����ռ˫�ֽڣ���λ�ֽ��ﶼ��<0������ֻ��ͳ��С��0���ַ��ĸ���  Ȼ���ܵ��ֽ���/2���Ǻ��ֵĸ��� 
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





















