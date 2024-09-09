#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	int max = INT_MIN, min = INT_MAX, razn, mass[10] = {1, 45, 85, 94, 4, 36, 63, 22, 7, 85};

	printf("Массив:");
	for (int i = 0; i < 10; i++) {
		printf("%3d", mass[i]);
		if (mass[i] >= max) {
			max = mass[i];
		}
		if (mass[i] <= min) {
			min = mass[i];
		}
	}
	razn = max - min;
	printf("\nМаксимальный элемент:%d\nМинимальный элемент:%d\nРазница между максимальным и минимальным:%d", max, min,razn);
	return 0;
}

