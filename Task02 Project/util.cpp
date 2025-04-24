#include "util.h"

void init(int* arr, int size, int a, int b) {
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % (b - a + 1) + a;
	}

}

string convert(int* arr, int size) {

	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(arr + i)) + " ";
	}

	return s;
}