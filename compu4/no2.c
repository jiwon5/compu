#include<stdio.h>
int main2() {

	int data = 0;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf_s("%x", &data);
	printf("8�����δ� %.4o \n", data);
	printf("10�����δ� %d \n", data);
	printf("16�����δ� %#x \n", data);

	return 0;
}