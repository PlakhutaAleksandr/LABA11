# Домашнее задание к работе 11

## Условие задач

<img width="1212" height="147" alt="image" src="https://github.com/user-attachments/assets/885cb33d-31e4-4396-a57c-8e4faea713fc" />

<img width="873" height="48" alt="image" src="https://github.com/user-attachments/assets/7452a79c-af96-4f3a-ac3c-df8ca49e2af8" />


## 1. Алгоритм и блок-схема.

### Алгоритм

1. **Начало**
2. **Объявление константы и переменных:**
   - Константа `NMAX = 100` — максимальный размер массива.
   - Массив `int a[NMAX]` и переменная `int n` — количество элементов массива.
3. **Ввод размера массива и проверка условия:**
   - Считать значение `n` с клавиатуры.
   - Проверить условие `n < 2 || n > NMAX`: если истинно, вывести сообщение об ошибке и завершить работу (`return 1`).
4. **Ввод элементов массива:**
   - В цикле от `i = 0` до `n - 1` считать элементы `a[i]`.
5. **Поиск наименьшего среднего соседних элементов:**
   - Инициализировать `min_avg = (a[0] + a[1]) / 2.0`.
   - В цикле от `i = 1` до `n - 2` вычислять `current_avg = (a[i] + a[i + 1]) / 2.0`.
   - Если `current_avg < min_avg`, обновить `min_avg = current_avg`.
6. **Вывод результата:**
   - Вывести `min_avg` с точностью до двух знаков после запятой (`%.2lf`).
7. **Конец**

### Блок-схема

<img width="1546" height="3440" alt="gost-flowchart (2)" src="https://github.com/user-attachments/assets/40ee91b4-013d-4cee-bb57-059cadf86af4" />

## 2. Реализация программы

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

## 3. Результаты работы программы

<img width="976" height="497" alt="image" src="https://github.com/user-attachments/assets/3677d745-759f-474a-b17d-6febc6d6b0ab" />

<img width="997" height="491" alt="image" src="https://github.com/user-attachments/assets/fdc534f0-b4f4-47a7-8de1-1573255d1587" />


## 4. Информация о разработчике

Плахута Александр Андреевич, бТИИ-262
