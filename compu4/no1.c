#include <stdio.h>

int main1()
{
    float x = 0.0f;
    printf("실수를 입력하시오: ");
    scanf_s("%f", &x);
    printf("실수형식으로는 %f \n", x);
    printf("지수형식으로는 %e", x);

    return 0;
}