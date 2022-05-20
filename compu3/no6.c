#include <stdio.h>
int main() {

	float x = 0.0f;
	printf("몸무게를 입력하세요(단위: kg): ");
	scanf_s("%f", &x);
	printf("달에서의 몸무게는 %fkg", x*0.17);


	return 0;
}