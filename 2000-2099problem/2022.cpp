/*
˼·�� 
�Զ�ά���������о���ֵ�������� 

*/

#include <stdio.h>
int abs(int x){
	return x>0 ? x : -x;
} 
int main(){
	int i,j,x,y;  //��ά���������
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











