#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
    int i = 0, j = 0;

    printf("값 2개를 입력해주세요 \n>");
    scanf("%d%d", &i, &j);

    int result = i + j;

    printf("Value is %d %d\n", i, j);
    printf("Value Result = %d", i + j);
    return 0;
}
