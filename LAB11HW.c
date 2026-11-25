#define _CRT_SECURE_NO_WARNINGS
#define NMAX 100
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");

	int a[NMAX];
	int n;
    
	printf("Введите количество элементов:");
	scanf("%d", &n);

	if (n<2 || n>NMAX) {
		printf("Нужно минимум 2 элемента, иначе нет соседних пар");
		return 1;
	}

	for (int i = 0; i < n;i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	double min_avg = (a[0] + a[1] / 2.0);
	for (int i = 1; i < n - 1; i++) {
		double current_avg = (a[i] + a[i + 1]) / 2.0;
		if (current_avg < min_avg) {
			min_avg = current_avg;
		}


	}

	printf("\nНаименьшее среднее двух соседних элементов: %.2lf\n", min_avg);
	return 0;
}