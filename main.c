// 112-Чудновский-Леонид
//Задача на вывод к-элементных подмассивов
#include <stdio.h>
#include <stdlib.h>
#include "bit.h"
#define k 4

int main(void) {
	char filename[120];	
	int N;
	int mass[k];
	FILE*fin;

	printf("Enter file name:");
	scanf("%s", filename);
	fin = fopen(filename, "w");
	scanf("%d", &N); //Задаём кол-во эементов массива
	int n = expn(2, N); //Получаем верхнюю границу перебора

	// провекрка на возможность открыть файл
	if(!fin){
		printf("Unable to open %s\n", filename);
		return 1;
		}

		//Выводим подмассивы
		for(int j = 1; j < n; j++){
			int flag = count_bit(j, k);
			if(flag == 1){ // Проверяем числа на подходимость по кол-ву элементов
				fprintf(fin, "{");
				for (int i = 0; i < k; i++){
					bit_fin(k, j, mass);
					fprintf(fin, "%d", mass[i]);
					if(i<k-1){
						fprintf(fin, ", ");
					}
				}
				fprintf(fin, "}   %d\n", j);
		}
	}
}