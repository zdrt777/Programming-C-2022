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

	printf("�������� ������ (1 - ������,\n 2 - �����, 3 - �����,\n 4 - ����, 5 - ����): ");
	scanf_s("%d", &figure);

	printf("������� ������� ������:\n");
	printf("\t- �����: ");
	scanf_s(" %c", &s1);
	scanf_s(" %d", &y1);

	printf("\t- �����: ");
	scanf_s(" %c", &s2);
	scanf_s(" %d", &y2);
	printf("���������: ");

	x1 = (int)s1 - 96;
	x2 = (int)s2 - 96;

	//�����
	if ((x1 == x2) && (y1 != y2) || (y1 == y2) && (x1 != x2)) {
		rook = 1;
	}

	//K�����
	if ((abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1) && ((x1 != x2) || (y1 != y2))) {
		king = 1;
	}

	//����
	if (abs(x2 - x1) == abs(y2 - y1) && (x1 != x2)) {
		bishop = 1;
	}

	//�����
	if (abs(x2 - x1) == abs(y2 - y1) && (x1 != x2) || (x1 == x2) && (y1 != y2) || (y1 == y2) && (x1 != x2)) {
		queen = 1;
	}

	//����
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
		printf("������������ ���!\n");
		printf("������ �����, ��� ������� ������ ��� ���������: ");
		if (queen == 1) {
			printf("����� ");
		}
		if (king == 1) {
			printf("������ ");
		}
		if (bishop == 1) {
			printf("���� ");

		}if (rook == 1) {
			printf("����� ");
		}
		if (knight == 1) {
			printf("���� ");
		}
		if (knight == 0 && rook == 0 && bishop == 0 && king == 0 && queen == 0) {
			printf("�����");
		}
		printf("\n\n");

	}

	if (correct == 1) {
		printf("���������� ���!\n\n");
	}

	system("pause");
	return 0;
}