#include <stdio.h>

int main2() {

	float meter = 0.0f, mile = 0.0f;

	printf("마일을 입력하시오: ");
	scanf_s("%f", &mile);

	meter = mile * 1609;

	printf("%f마일은 %f미터입니다.", mile, meter);




	return 0;
}