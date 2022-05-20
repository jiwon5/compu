#include <stdio.h>
int main3() {

	float x = 0.0f, y = 0.0f;

	printf("삼각형의 밑변: ");
	scanf_s("%f", &x);
	printf("삼각형의 높이: ");
	scanf_s("%f", &y);

	
	printf("삼각형의 넓이: %f", x * y * 0.5);




	return 0;
}