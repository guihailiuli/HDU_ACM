/*
思路：
1 3 5 7 8 10 12月是每月31天
如果是闰年2月是29天，平年2月是28天， 年份能够被4整除但是不能被100整除或年份能被400整除的是闰年
4 6 9 11月是30天 

先判断年份是否是闰年，再用一个二维数组保存闰年(1)和非闰年(0)的每个月的天数，循环月份累加 

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



