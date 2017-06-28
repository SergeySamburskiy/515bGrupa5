#include <stdio.h>
#include<string.h>
#include<locale.h>
#define MAX 30
void tetra(char *str1, char *str2, char *str3);
void show(char *str1, char *str2, char *str3);
void band(char *str1, char *str2, char *str3);

int main(void) {
	int i, n, v;
	setlocale(LC_ALL, "RUS");
	char str1[MAX], str2[MAX], str3[MAX];

	printf("¬ведите названи€ 3х строк(на латинице) : \n");

	scanf("%s%s%s", &str1, &str2, &str3);

	printf("’отите просмотреть строки ? 1-да 0-нет\n");

	scanf("%i", &n);

	if (n == 1)
	{ 
		show(str1, str2, str3);
	}
	printf("’отите найти строку  ? 1-да 0-нет\n");
	scanf("%i", &v);

	if (v == 1)
	{
		tetra(str1, str2, str3);
	}

	printf("’отите обьеденить все строки ?1-да 0-нет \n");
	scanf("%i", &i);
	if (i == 1)

	{
		band(str1, str2, str3);
	}

	return 0;
}

void tetra(char *str1, char *str2, char *str3)
{
	char stroka[MAX];
	printf("¬ведите строку дл€ поиска\n");
	scanf(stroka);
	if (strstr(str1, stroka))
	{
		printf("1 - строка\n");
	}
	if (strstr(str2, stroka))

	{
		printf("2 - строка\n");
	}
	if (strstr(str3, stroka))
	{
		printf("3 - строка\n");
	}

}
void show(char *str1, char *str2, char *str3)
{
	int i;
	printf("¬ведите номер строки дл€ вывода, либо нажмите 4-дл€ вывода всех строк : ");
	scanf("%i", &i);
	switch (i)
	{
	case 1: puts(str1);
		break;
	case 2: puts(str2);
		break;
	case 3: puts(str3);
		break;
	case 4: puts(str1);
		puts(str2);
		puts(str3);
		break;
	}
}
void band(char *str1, char *str2, char *str3)
{
	strcat(str1, str2);
	strcat(str1, str3);

	puts(str1);

}
