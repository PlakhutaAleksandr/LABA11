#define _CRT_SECURE_NO_WARNINGS
#define N 100
#define A 1.0
#define B 3.0
#include <stdio.h>
#include <locale.h>

double calc_y(double x);

int main() {
	setlocale(LC_ALL, "Russian");

	double arr[N];
	double pos_sum = 0.0;
	double neg_sum = 0.0;
	int pos_cnt = 0;
	int neg_cnt = 0;

	for (int i = 0;i < N;i++) {
		double x = A + (B - A) * i / (N - 1);
		arr[i] = calc_y(x);
	}

	for (int i = 0;i < N;i++) {
		if (arr[i] > 0.0) {
			pos_sum += arr[i];
			pos_cnt++;
		}
		else if (arr[i] < 0.0) {
			neg_sum += arr[i];
			neg_cnt++;

		}
	}

	double avg = 0.0;
	if (pos_cnt > 0) {
		avg = pos_sum / pos_cnt;
	}

	printf("Массив: arr | Сумма полож.: %.2f | Сумма отриц.: %.2f | Кол-во полож.: %d | Кол-во отриц.: %d | Среднее полож.: %.2f\n",
		pos_sum, neg_sum, pos_cnt, neg_cnt, avg);

	return 0;
 
}

double calc_y(double x) {
	double res;
	res = x * x * x - 4.0 * x * x + 2.0;
	return res;
}