/*
˼·�� 
�жϵ��ʵ�����ĸ�� �����жϵ�ǰ�ַ�����ĸ��Ȼ��ǰ�ַ���ǰһ���ַ��ǿո��������д 
�����ַ����ĵ�һ���ַ������Ա���ǰһ���ַ��ı���Ϊ�ո�
�������ַ���������ĵ�һ��Ϊ�ո񣬶�ȡ�ַ�����ӵڶ�����ʼ���� 

*/

#include <stdio.h>
#include <ctype.h>
int main(){
	int i;
	char str[101] = {" "};   //�������һ����Ϊ�� 
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
























