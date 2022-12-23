#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include "Square.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Square kv;
	kv.perimetr();
}