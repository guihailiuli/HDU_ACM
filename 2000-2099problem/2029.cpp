/*
˼·��
ͨ��strlen�õ������ַ����ĳ��ȣ�i��ͷ��ʼ��j��β��ʼ�����αȽ��Ƿ���ȣ�
���в����������ѭ����Ȼ��Ƚ�i��j�Ĵ�С���� i<j ��˵��ĳ��ѭ��ĳ���ط�����ȣ������ǻ��Ĵ� 

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















