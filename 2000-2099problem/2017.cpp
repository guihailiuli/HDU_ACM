/*
˼·�� 

��������һ���е��ַ���
�����ֱ������ַ���������
��\n���ж���ĩ 
ͨ��ascii��ֱ��Ƿ������֣�1��ascii��48��9��ascii����57 
ѭ������ͳ������ 

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
		    //gets()���������ж�ȡ�ַ�����ֱ�����ֻ��з�������ļ�βΪֹ��������NULL��Ϊ�ַ���������
			gets(str);
			len=strlen(str);   //strlenȡ�ø��ַ����ĳ��� 
			for(i=0; i<len; i++)
			{
				if(str[i]>=48 && str[i]<=57)    //ͨ��ascii���ж��Ƿ������� 
				    count++;
			}
			printf("%d\n", count);
		}
	} 
	return 0;
} 









