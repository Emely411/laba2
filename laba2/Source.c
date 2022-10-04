#include <stdio.h>

void task1() {
	int count = 0;
	for (int a = 1; a <= 9; a++)
		for (int b = 0; b <= 9; b++)
			if (a * a + b * b == 3 * a * b + 1 && 10 * a + b == 7 * (a + b) + 6)
			{
				printf("Answer = %d\n", 10 * a + b);
				count = count + 1;
			}

	if (count == 0)
	{
		printf("there is no such number");
	}
}
double c(double m, double n)//функиця для нахождения значения С
{
	double c = 1 / m;
	for (; 0 < n; n--)
	{
		c += 1 / (m + n);
	}
	return c;
}
void task2()
{
	int m, n;
	printf("Input m and n: ");
	scanf_s("%d%d", &m, &n);
	if (m < n && m>0 && n > 0)//проверка условия
	{
		printf("c = %f\n", c(m, n));
	}
	else
	{
		printf("Invalid variable value\n");
	}
	return 0;
}
int Fibonacci(int i)         //проверка данного числа, является ли оно элементом таблицы Фибоначчи
{
	int f1 = 1, f2 = 1;
	int f = 0;
	int v = 0;
	while (v < i - 2)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		v++;
	}
	return f;
}
int task3()
{
	int N;
	printf("Input N: ");
	scanf_s("%d", &N);
	if (N > 1)
	{
		int a = 1, b = 1, c = 0, i = 2; //a-первое значение в таблице, b-второе, с-последующее, i-номер с которого начинается отсчет
		for (; c < N; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		if (Fibonacci(i) == N)
		{
			printf("Serial number K: %d\n", i);
		}

		else {
			printf("Invalid value N\n");
		}

	}
	return 0;
}
int main() {
	int operation;

	while (1) {

		printf("Choose operation: ");
		scanf_s("%d", &operation);
		if (operation != 0) {
			switch (operation) {
			case 1:
				task1();
				break;

			case 2:
				task2();
				break;

			case 3:
				task3();
				break;
			default:
				printf("Try again\n");
			}
		}
		else {
			printf("Finished!");
			return 0;
		}
	}
}