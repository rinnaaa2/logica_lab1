#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	int size=0, max = INT_MIN, min = INT_MAX, razn;
	printf("Введите размер массива:");
	scanf("%d", &size);

	int* mass;
	mass = (int*)malloc(size * sizeof(int));

	printf("Массив:");
	for (int i = 0; i < size; i++) {
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

	free(mass);
	return 0;
}