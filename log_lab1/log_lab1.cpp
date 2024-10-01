#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX_STUDENTS 100 // Максимальное количество студентов

struct student {
    char famil[50];
    char name[50];
    int nomzach;
};

//поиска студента 
struct student* search(struct student stud[], int num_students, char* famil, char* name, int nomzach) {
    for (int i = 0; i < num_students; i++) {
        if (strcmp(stud[i].famil, famil) == 0 &&
            strcmp(stud[i].name, name) == 0 &&
            stud[i].nomzach == nomzach) {
            return &stud[i]; // Возвращаем указатель на найденного студента
        }
    }
    return NULL; // Студент не найден
}

<<<<<<< HEAD
	printf("\nСумма по столбцам:\n");
	for (int j = 0; j < stolb; j++) {
		int sum = 0;
		for (int i = 0; i < stroca; i++) {
			sum += mass[i][j];
		}
		printf("Столбец %d: %d\n", j + 1, sum);
	}
	
	int summ = 0;
	if (stroca == stolb) {
		for (int i = 0; i < stroca; i++) {
			for (int j = 0; j < stolb; j++) {
				if (i == j) {
					summ += mass[i][i];
				}
			}
		}
	}
	
	razn = max - min;
	printf("\nМаксимальный элемент:%d\nМинимальный элемент:%d\nРазница:%d", max, min, razn);
	printf("\nСумма элементов на диагонали:%d", summ);
	free(mass);
	return 0;
}
=======
int main() {
    setlocale(LC_ALL, "");
    // Создаем массив структур students
    struct student stud[MAX_STUDENTS];
    int num_students = 0;

    printf("Введите данные о студентах (введите '*', чтобы закончить):\n");
    char input_famil[50], input_name[50];
    int input_nomzach;
    while (1) {
        printf("Фамилия: ");
        scanf("%s", input_famil);
        if (strcmp(input_famil, "*") == 0) {
            break;
        }
        printf("Имя: ");
        scanf("%s", input_name);
        printf("Номер зачётки: ");
        scanf("%d", &input_nomzach);
      
        strcpy(stud[num_students].famil, input_famil);
        strcpy(stud[num_students].name, input_name);
        stud[num_students].nomzach = input_nomzach;
       
        num_students++;
    }

    char search_famil[50], search_name[50]/*, search_facult[10]*/;
    int search_nomzach;
    printf("\nВведите фамилию студента для поиска: ");
    scanf("%s", search_famil);
    printf("Введите имя студента для поиска: ");
    scanf("%s", search_name);
    printf("Введите номер зачётки студента для поиска: ");
    scanf("%d", &search_nomzach);
   
    struct student* search_student = search(stud, num_students, search_famil, search_name,/*, search_facult,*/ search_nomzach);

    if (search_student != NULL) {
        printf("Студент найден:\n");
        printf("Фамилия: %s\n", search_student->famil);
        printf("Имя: %s\n", search_student->name);
        printf("зачётка: %d\n", search_student->nomzach);
    }
    else {
        printf("Студент не найден.\n");
    }
    return 0;
}
>>>>>>> 40568b9420556fb53e30c5b0c4227053c31f71c0
