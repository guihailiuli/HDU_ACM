/*
思路：
f(i,j) = f(i-1, j) + f(i-1, j-1) 
 
*/ 
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, n;
    int YanHui[32];

    while (scanf("%d", &n) != EOF)
    {
        memset(YanHui, 0, sizeof(YanHui));  //用memset将数组置零
        YanHui[0] = 1;
        for (i = 0 ; i < n ; i++)
        {
            printf("%d", 1);
            for (j = i ; j ; j--)
                YanHui[j] += YanHui[j - 1];
            for (j = 1 ; j <= i ; j++)
                printf(" %d", YanHui[j]);
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
			
















