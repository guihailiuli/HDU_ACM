/*
˼·��
 ��������Ѱ����Сֵ��ֻ���ס��Сֵ���±�Ϳ����ˣ�
 �����ʱ������֮��Ŀո�ͨ��n�ĸ������жϣ����������һ�����ÿո񣬵����һ���û��� 

*/
#include <stdio.h>
void swap(int &m, int &n) {
	int temp=m;
	m=n; 
	n=temp;
}
int main() {
	int i,m,n,num[100];
	while(scanf("%d", &n) != EOF) 
	{
		m=0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &num[i]);
			if(num[i]<num[m]) 
			    m=i;
			    
		}
		swap(num[m], num[0]);
		for(i=0; i<n; i++)
		{
			printf("%d", num[i]);
			printf(i<n-1 ? " " : "\n");
		}
	}
	return 0;
}










