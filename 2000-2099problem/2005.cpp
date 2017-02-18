/*
˼·��
1 3 5 7 8 10 12����ÿ��31��
���������2����29�죬ƽ��2����28�죬 ����ܹ���4�������ǲ��ܱ�100����������ܱ�400������������
4 6 9 11����30�� 

���ж�����Ƿ������꣬����һ����ά���鱣������(1)�ͷ�����(0)��ÿ���µ�������ѭ���·��ۼ� 

*/

#include <stdio.h>
int isLeapYear(int year) {
	if((year%4==0 && year%100!=0) || year%400==0) {
		return 1;
	}else {
		return 0;
	}
	
}
int main() {
	int year, month, day, i, sum;
	int mArr[2][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	};
	while(scanf("%d/%d/%d", &year, &month, &day) != EOF) {
		for(sum=0, i=1; i<month; i++) {
			sum += mArr[isLeapYear(year)][i];
		}
		sum += day;
		printf("%d\n", sum);
		
	}
	return 0; 
}



