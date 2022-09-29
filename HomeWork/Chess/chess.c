#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "rus");

	int x2, y2, x1, y1, figure, king, bishop, queen, rook, knight, correct;
	char s1, s2;
	king = 0;
	bishop = 0;
	queen = 0;
	rook = 0;
	knight = 0;
	correct = 0;

	printf("Выберите фигуру (1 - король,\n 2 - ферзь, 3 - ладья,\n 4 - слон, 5 - конь): ");
	scanf_s("%d", &figure);

	printf("Введите позиции фигуры:\n");
	printf("\t- старт: ");
	scanf_s(" %c", &s1);
	scanf_s(" %d", &y1);

	printf("\t- финиш: ");
	scanf_s(" %c", &s2);
	scanf_s(" %d", &y2);
	printf("Результат: ");

	x1 = (int)s1 - 96;
	x2 = (int)s2 - 96;

	//Ладья
	if ((x1 == x2) && (y1 != y2) || (y1 == y2) && (x1 != x2)) {
		rook = 1;
	}

	//Kороль
	if ((abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1) && ((x1 != x2) || (y1 != y2))) {
		king = 1;
	}

	//слон
	if (abs(x2 - x1) == abs(y2 - y1) && (x1 != x2)) {
		bishop = 1;
	}

	//ферзь
	if (abs(x2 - x1) == abs(y2 - y1) && (x1 != x2) || (x1 == x2) && (y1 != y2) || (y1 == y2) && (x1 != x2)) {
		queen = 1;
	}

	//конь
	if (abs(x2 - x1) == 1 && abs(y2 - y1) == 2 || abs(x2 - x1) == 2 && abs(y2 - y1) == 1) {
		knight = 1;
	}


	if (figure == 1 && king == 1) {
		correct = 1;
	}
	else if (figure == 2 && queen == 1) {
		correct = 1;
	}
	else if (figure == 3 && rook == 1) {
		correct = 1;
	}
	else if (figure == 4 && bishop == 1) {
		correct = 1;
	}
	else if (figure == 5 && knight == 1) {
		correct = 1;
	}
	else {
		printf("Некорректный ход!\n");
		printf("Список фигур, для которых данных ход корректен: ");
		if (queen == 1) {
			printf("Ферзь ");
		}
		if (king == 1) {
			printf("Король ");
		}
		if (bishop == 1) {
			printf("Слон ");

		}if (rook == 1) {
			printf("Ладья ");
		}
		if (knight == 1) {
			printf("Конь ");
		}
		if (knight == 0 && rook == 0 && bishop == 0 && king == 0 && queen == 0) {
			printf("пусто");
		}
		printf("\n\n");

	}

	if (correct == 1) {
		printf("Корректный ход!\n\n");
	}

	system("pause");
	return 0;
}