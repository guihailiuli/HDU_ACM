/*
˼·��
ͨ��gets()���������ַ����� �������������ֵmax
ͨ��putchar()��������ַ����������ʱ�жϸ��ַ����Ƿ��max��ͬ�����ǣ��ں������(max) 

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
