#define _CRT_SECURE_NO_WARNINGS
#include "Square.h"
Square::Square() {
	printf("������� ������� ��������\n");
	scanf("%f", &a);
}
void Square::perimetr() {
	float per = a * 4;
	printf("��� ��������: %f", per);
}