#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

int main()
{
	int n;

	setlocale(LC_CTYPE, "RUS");

	printf("�������� ���������� ������ � �������� ���������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: printf("�����!");
		break;

	case 2: printf("�������������������!");
		break;

	case 3: printf("�������������!");
		break;

	case 4: printf("������!");
		break;

	case 5: printf("�������!");
		break;

	default: printf("�������� ��������");
		break;
	}

	return 0;

	system("pause");

}