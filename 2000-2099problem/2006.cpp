/*
˼·��

�������n���������б���������i������Ϊż��ʱ����������Ϊ����ʱ����ǰһ��������� 
��������˵Ļ� 
*/

#include <stdio.h>
int main() {
	int i, n;
	while(scanf("%d", &n) != EOF) {
		int chengJi=1, num;
		while(n--) 
		{
			scanf("%d", &num);
			//if(num%2!=0)
			if(num & 1)  //�ж�num�����λ�Ƿ�Ϊ1���ȼ��� num&1 == 1 
			{
				chengJi *= num;
			}
		}
		printf("%d\n",chengJi);
	}
	return 0;
} 



 
