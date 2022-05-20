#include<stdio.h>
int main5() {

	float x = 0.0f;
	printf("실수를 입력하세요: ");
	scanf_s("%f", &x);
	printf("다항식의 값은 %f", 3 * x * x + 7 * x + 11);


	return 0;
}