#include<stdio.h>
int main2() {

	int data = 0;

	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &data);
	printf("8진수로는 %.4o \n", data);
	printf("10진수로는 %d \n", data);
	printf("16진수로는 %#x \n", data);

	return 0;
}