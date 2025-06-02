#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
    // 환율 계산기

    int won = 0;
    double dollar = 0;

    printf("Input won \n");

    scanf("%d", &won);
    dollar = won * 0.00089;
    printf("Dollar = %f", dollar);

    return 0;
}
