#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	char c;

	printf("������� ������� 'a' or 'b': ");


	scanf("%c", &c);//���������� � �������

	switch (c)
	{
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
		printf("��� ����� %c\n", c);
		break;
	default:
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			printf("��� ����� %c\n", c);
		}
		else 
		{
			printf("��� �� ����� � �� �����\n");
		}
	}

	return 0;

	system("pause");
}