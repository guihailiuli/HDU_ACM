/*
˼·�� 
���ܳɼ����жϷ�Χ�����ɼ�����0-100�ڣ������error
���ݳɼ���Χ����Ӧ����ȼ� 

*/

#include <stdio.h>
int main() {
	int t;
	while(scanf("%d", &t) != EOF) 
	{
		if(t<0 || t>100) {
			printf("Score is error!\n");
		}else if(t<59) {
			printf("E\n");
		}else if(t<69) {
		    printf("D\n"); 
		}else if(t<79) {
			printf("C\n");
		}else if(t<89){
			printf("B\n");
		}else if(t<=100){
			printf("A\n");
		}
	}
	return 0;
}
