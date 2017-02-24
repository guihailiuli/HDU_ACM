/*
思路
通过switch语句来判断元音的个数
通过ch=getchar()来读取输入的字符，并判断是否换行 

*/

#include <stdio.h>
#include <ctype.h>
int main() {
	int n;
	int arr[5];
	char ch;
	scanf("%d\n", &n);
	while(n--)
	{
		arr[0]=arr[1]=arr[2]=arr[3]=arr[4]=0;
		while( (ch=getchar()) != '\n')
		{
			switch(tolower(ch))
			{
				case 'a':
					arr[0]++;
					break;
				case 'e':
					arr[1]++;
					break;
				case 'i':
					arr[2]++;
					break;
				case 'o':
					arr[3]++;
					break;
				case 'u':
					arr[4]++;
					break;
			}
		}
		printf("a:%d\n", arr[0]);
		printf("e:%d\n", arr[1]);
		printf("i:%d\n", arr[2]);
		printf("o:%d\n", arr[3]);
		printf("u:%d\n", arr[4]);
		if (n) 
		{
			printf("\n");
			
		}
	}
} 















