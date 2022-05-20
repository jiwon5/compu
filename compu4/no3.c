#include<stdio.h>
int main() {
	int x = 10, y = 20;
	printf("x= %d y= %d \n", x, y);

	int z = 0; 
	z = y; 
	y = x;
	x = z;


	printf("x=%d y=%d", x, y);


	return 0;
}