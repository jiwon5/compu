

#include <stdio.h>

int main1()
{

	float x = 0.0f, y = 0.0f, z = 0.0f, sum = 0.0f, avg = 0.0f;
	printf("실수를 입력하시오: ");
	scanf_s("%f", &x);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &y);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &z);

	sum = x + y + z; 
	avg = sum / 3.0;

	printf("합은 %f 이고, 평균은 %f 입니다.", sum, avg );
	



	return 0;
}