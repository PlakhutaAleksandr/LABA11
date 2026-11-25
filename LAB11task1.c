#define _CRT_SECURE_NO_WARNINGS
#define N 10
#define K 2.5f
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");

	float a[N];
	float b[N];
	float temp;
	float sum = 0.0f;

	for (int i = 0; i < N;i++) {
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		a[i] = temp;
	}

	for (int i = 0;i < N;i++) {
		b[i] = a[i] - K;
		sum += b[i];
	}

	printf("\n| индекс | исходное значение | новое значение |\n");
	printf("-----------------------------------------------\n");

	for(int i=0;i<N;i++) {
		printf("| %6d | %17.2f | %14.2f |\n", i, a[i], b[i]);
	}

	printf("\nСреднее арифметическое элементов: %.2f\n", sum / N);

	return 0;
}