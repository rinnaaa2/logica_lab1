#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	int stroca,stolb, max = INT_MIN, min = INT_MAX, razn;
	printf("Введите кол-во строк:");
	scanf("%d", &stroca);
	printf("Введите кол-во столбцов:");
	scanf("%d", &stolb);
	
	int **mass = (int**)malloc(stroca*sizeof(int*));
	for (int i = 0; i < stroca; i++) {
		mass[i] = (int*)malloc(stolb * sizeof(int));
	}

	printf("Массив:");
	for (int i = 0; i < stroca; i++) {
		printf("\n");
		for (int j = 0; j < stolb; j++) {
			mass[i][j] = rand() % 100;
			printf("%3d", mass[i][j]);
			if (mass[i][j] >= max) {
				max = mass[i][j];
			}
			if (mass[i][j] <= min) {
				min = mass[i][j];
			}
		}
	}

	printf("\nСумма по столбцам:\n");
	for (int j = 0; j < stolb; j++) {
		int sum = 0;
		for (int i = 0; i < stroca; i++) {
			sum += mass[i][j];
		}
		printf("Столбец %d: %d\n", j + 1, sum);
	}
		
	razn = max - min;
	printf("\nМаксимальный элемент:%d\nМинимальный элемент:%d\nРазница:%d", max, min, razn);

	free(mass);
	return 0;
}