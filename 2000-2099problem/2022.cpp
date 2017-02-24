/*
思路： 
对二维数组求其中绝对值最大的数字 

*/

#include <stdio.h>
int abs(int x){
	return x>0 ? x : -x;
} 
int main(){
	int i,j,x,y;  //二维数组的坐标
	int m,n;
	double  score,maxscore;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		maxscore = x = y =0;
		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				scanf("%lf", &score);
				if(abs(score) > abs(maxscore))
				{
					maxscore = score;
					x = i;
					y = j;
				}
			}
		}
		printf("%d %d %.0lf\n", x+1, y+1, maxscore);
	}
	return 0;
}











