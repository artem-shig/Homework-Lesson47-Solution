#include "logic.h"

int find_max_value(int* arr, int size) {
	int maxValue = *(arr + 0);

	for (int i = 1; i < size; i++)
	{
		if (maxValue <= *(arr + i)) {
			maxValue = *(arr + i);
		}
	}

	return maxValue;
}

int find_min_value(int* arr, int size) {
	int minValue = *(arr + 0);

	for (int i = 1; i < size; i++)
	{
		if (minValue >= *(arr + i)) {
			minValue = *(arr + i);
		}
	}

	return minValue;
}

void replace_extreme_elements_of_vector(int* arr, int size) {

	int maxValue = find_max_value(arr, size);
	int minValue = find_min_value(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == maxValue) {
			*(arr + i) = minValue;
		}
		else if (*(arr + i) == minValue) {
			*(arr + i) = maxValue;
		}
	}
}
