#include <stdio.h>
int main4 (){
	
	float c = 0.0f, f = 0.0f;

	printf("화씨를 입력하시오: ");
		scanf_s("%f", &f);

		c = (5.0 / 9.0) * (f - 32.0);
		printf("섭씨값은 %f도입니다.", c);


	return 0;
}