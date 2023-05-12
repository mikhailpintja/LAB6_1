/ Lab6_1.c: Пошук середнього арифметичного значення мінімального та максимального елементів двомірного масиву.
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_CTYPE, "ukr");
	const int n = 3, m = 4;
	int a[3][4], i, j, max, min;
	printf("\n Введiть значення елементiв масиву A: \n");
	for (i = 0; i <= (n - 1); i++)
	{
		for (j = 0; j <= (m - 1); j++)
		{
			printf("\t а[%d, %d]=", i + 1, j + 1); scanf("%d", &a[i][j]);
		}
	}
	system("cls");
	max = 0; min = 0;
	for (i = 0; i <= (n - 1); i++)
	{
		for (j = 0; j <= (m - 1); j++)
		{
			if (max < a[i][j]) max = a[i][j];
			if (min > a[i][j]) min = a[i][j];
		}
	}
	printf("\n Введено матрицю: \n \n");
	for (int i = 0; i <= (n - 1); i++)
	{
		if (i != 1) printf("\t | ");
		if (i == 1) printf(" A[%d,%d]= | ", n, m);
		for (j = 0; j <= (m - 1); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\b\b\b\b\b\b| \n\n");
	}
	printf("\n Максимальне значення в масивi МАХ=%d", max);
	printf("\n Мiнiмальне значення в масивi МIN=%d", min);
	printf("\n Середнє арифметичне їх S= %.1f", (double)(max + min) / 2);
	int getch(); getch();
	return 0;
}
