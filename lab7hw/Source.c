#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

int main()
{
	int n;

	setlocale(LC_CTYPE, "RUS");

	printf("Напишите полученную оценку в цифровом значениии: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: printf("Плохо!");
		break;

	case 2: printf("Неудовлетворительно!");
		break;

	case 3: printf("Посредственно!");
		break;

	case 4: printf("Хорошо!");
		break;

	case 5: printf("Отлично!");
		break;

	default: printf("Неверное значение");
		break;
	}

	return 0;

	system("pause");

}