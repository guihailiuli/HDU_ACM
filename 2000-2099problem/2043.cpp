/*
思路： 
先将四个字符类别初始都设为0，
顺序读取一行的字符，判断该行中是否出现大写字母，若有，则设为1，若没有则保持初始值，
其他三类字符也类似判断。同时统计该行字符数是否满足题目要求

最后判断设为1的数量若>=3，且字符长度符合要求，则是复杂密码 
 
*/

#include <stdio.h>
#include <string.h>
int main() {
	int i,n,x,y,z,w,len;
	char c;
	scanf("%d\n", &n);
	while(n--)
	{
		char ch[50];
		len=x=y=z=w=0;
		gets(ch);
		len = strlen(ch);
		if(len >= 8 && len <= 16)
		{
			// \0作为字符串结束符，\n作为换行符 
			for(i=0; ch[i] != '\0'; i++)
			{
				if(ch[i] >= 'a' && ch[i] <= 'z')
				    x=1;
				else if(ch[i] >= 'A' && ch[i] <= 'Z')
				    y=1;
				else if(ch[i] >= '0' && ch[i] <= '9')
				    z=1;
				else if(ch[i] == '~' || ch[i] == '!'|| ch[i] == '@' || ch[i] == '#' || ch[i] == '$' || ch[i] == '%' || ch[i] == '^')
				    w=1;
				if(x+y+z+w >= 3)
				{
					printf("YES\n");
					break;
				}
				
			}
			if(x+y+z+w < 3)
			{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 

















