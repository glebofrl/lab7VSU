#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

int main()

{
	setlocale(LC_CTYPE, "RUS");

	float x, y;
	char c;

	printf("***�����������***");
	printf("������� ��������� �������, ��� ��������, � �������: \"�������1 �������� �������2\"\n");

	scanf("%f%c%f", &x, &c, &y);

	switch (c)
	{
	case '+':
		printf("=%f", x + y);
		break;

	case '-':
		printf("=%f", x - y);
		break;

	case '/':
		printf("=%f", x / y);
		break;

	case '*':
		printf("=%f", x * y);
		break;

	case '^':
		printf("=%g", pow(x,y));
		break;

	default:
		printf("�������������� ������");
		break;
	}

	return 0;

	system("pause");
}