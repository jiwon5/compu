#include <stdio.h>

int main2() {

	float meter = 0.0f, mile = 0.0f;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%f", &mile);

	meter = mile * 1609;

	printf("%f������ %f�����Դϴ�.", mile, meter);




	return 0;
}