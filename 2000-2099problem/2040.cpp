/*
˼·�� 
Լ���� ���� a �������� b ���õ���������������û����������a�ܱ�b������b��a��Լ��
 
*/


#include <stdio.h>
int isQinheshu(int n){
	int i,sum=1;
	for(i=2; i<=n/2; i++)
	{
		if(n%i == 0)   //i��n��Լ�� 
		{
			sum+=i;
		}
	}
	return sum;
}
int main() {
	int m,a,b;
	scanf("%d", &m);
	while(m-- && scanf("%d%d", &a, &b)) 
	{
		printf(isQinheshu(a)==b && isQinheshu(b) == a ? "YES\n" : "NO\n");
	}
}












