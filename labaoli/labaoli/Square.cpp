#define _CRT_SECURE_NO_WARNINGS
#include "Square.h"
Square::Square() {
	printf("введите сторону квадрата\n");
	scanf("%f", &a);
}
void Square::perimetr() {
	float per = a * 4;
	printf("ваш периметр: %f", per);
}