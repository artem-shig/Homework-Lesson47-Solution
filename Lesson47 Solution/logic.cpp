#include "logic.h"

int find_max_value_index(int* arr, int size) {
	int maxValueIndex = 0;

	for (int i = 1; i < size; i++)
	{
		if (*(arr + maxValueIndex) <= *(arr + i)) {
			maxValueIndex = i;
		}
	}

	return maxValueIndex;
}

int find_min_value_index(int* arr, int size) {
	int minValueIndex = 0;

	for (int i = 1; i < size; i++)
	{
		if (*(arr + minValueIndex) > *(arr + i)) {
			minValueIndex = i;
		}
	}

	return minValueIndex;
}

int sum_of_vector_between_min_and_max_values(int* arr, int size) {
	int sum = 0;
	int maxValueIndex = find_max_value_index(arr, size);
	int minValueIndex = find_min_value_index(arr, size);

	if (maxValueIndex < minValueIndex) {
		int t = minValueIndex;
		minValueIndex = maxValueIndex;
		maxValueIndex = t;
	}

	for (int i = minValueIndex + 1; i < maxValueIndex; i++)
	{
		sum += *(arr + i);
	}

	return sum;
}