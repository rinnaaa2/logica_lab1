#include <iostream>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	int max = INT_MIN, min = INT_MAX, razn, mass[10];

	printf("Массив:");
	for (int i = 0; i < 10; i++) {
		mass[i] = rand() % 100;
		printf("%3d", mass[i]);
		if (mass[i] >= max) {
			max = mass[i];
		}
		if (mass[i] <= min) {
			min = mass[i];
		}
	}
	razn = max - min;
	printf("\nМаксимальный элемент:%d\nМинимальный элемент:%d\nРазница:%d", max, min, razn);
	return 0;
}