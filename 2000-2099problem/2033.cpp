/*
˼·�� 

����60: num/60 �õ��Ľ����Ϊ1������ǰ��1λ
���������������6����������λʱ��������ĳλ������+1�� 
 
*/

#include <stdio.h>
int main() {
	int n,i;
	int timeArr[6];
	scanf("%d", &n);
	while(n--)
	{
		for(i=0; i<6; i++)
		{
			scanf("%d", &timeArr[i]);
		}
		timeArr[1] += (timeArr[2]+timeArr[5])/60;
		timeArr[2] = (timeArr[2]+timeArr[5])%60;
		
		timeArr[0] += (timeArr[1]+timeArr[4])/60;
		timeArr[1] = (timeArr[1] + timeArr[4])%60;
		
		timeArr[0] += timeArr[3];
		printf("%d %d %d\n", timeArr[0], timeArr[1], timeArr[2]);
    }
    return 0;
}

















