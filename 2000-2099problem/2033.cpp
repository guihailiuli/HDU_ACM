/*
思路： 

整除60: num/60 得到的结果若为1，则向前进1位
可以用数组来存放6个数，当进位时，将数组某位的数字+1， 
 
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

















