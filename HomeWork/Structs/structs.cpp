#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <iostream>


struct Dimension {
	int width;
	int height;
	int depth;
};

struct Book {
	std::string author;
	std::string title;
	std::string publisher;
	int year;
	int count_pages;
	int id;
};

struct CPFC {
	float calories;
	int protein;
	int fats;
	int carbohydrate;
};

struct FIO {
	std::string name;
	std::string surname;
	std::string patronymic;
};

struct Copybook {
	int cost;
	int count_pages;
	int id;
};

struct Time {
	int hours;
	int minutes;
	int seconds;
};

struct Jeans {
	int cost;
	std::string colour;
	int size;
	int id;
};

struct TV {
	std::string name;
	float diagonal;
	int cost;
	int id;
};