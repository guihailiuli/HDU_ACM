/*
˼·�� 
�Ƚ��ĸ��ַ�����ʼ����Ϊ0��
˳���ȡһ�е��ַ����жϸ������Ƿ���ִ�д��ĸ�����У�����Ϊ1����û���򱣳ֳ�ʼֵ��
���������ַ�Ҳ�����жϡ�ͬʱͳ�Ƹ����ַ����Ƿ�������ĿҪ��

����ж���Ϊ1��������>=3�����ַ����ȷ���Ҫ�����Ǹ������� 
 
*/

#include <stdio.h>
#include <string.h>
int main() {
	int i,n,x,y,z,w,len;
	char c;
	scanf("%d\n", &n);
	while(n--)
	{
		char ch[50];
		len=x=y=z=w=0;
		gets(ch);
		len = strlen(ch);
		if(len >= 8 && len <= 16)
		{
			// \0��Ϊ�ַ�����������\n��Ϊ���з� 
			for(i=0; ch[i] != '\0'; i++)
			{
				if(ch[i] >= 'a' && ch[i] <= 'z')
				    x=1;
				else if(ch[i] >= 'A' && ch[i] <= 'Z')
				    y=1;
				else if(ch[i] >= '0' && ch[i] <= '9')
				    z=1;
				else if(ch[i] == '~' || ch[i] == '!'|| ch[i] == '@' || ch[i] == '#' || ch[i] == '$' || ch[i] == '%' || ch[i] == '^')
				    w=1;
				if(x+y+z+w >= 3)
				{
					printf("YES\n");
					break;
				}
				
			}
			if(x+y+z+w < 3)
			{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 

















