#include "util.h"
#include "logic.h"

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];

    init(arr, size, -50, 100);
    cout << "Array before: " << convert(arr, size) << endl;

    replace_extreme_elements_of_vector(arr, size);
    cout << "Array after: " << convert(arr, size) << endl;

    delete[] arr;

    return 0;
}