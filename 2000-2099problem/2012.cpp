
#include <stdio.h>
#include <math.h>
int judge(int x)
{
	 x=x*x+x+41;
	 int k=(int)sqrt((double)x);
	 for (int i=2;i<=k;i++)
	 {
		 if(x%i==0) return 0; 
	 }
	 return 1;
}
int main() {
 int x,y;
 while(scanf("%d%d",&x,&y)!=EOF)
 {
	 if(x==0&&y==0) break;
	 int f=0;
	 for (int i=x;i<=y;i++)
	 {
			 if (!judge(i))
			 {
				 f=1;
				 break;
			 }
	 }
		if(f) printf("Sorry\n");
		else printf("OK\n");
 }
 return 0;
}
