#include "util.h"
#include "logic.h"

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size] {1,2,3,4,5,6,7,8,9,9,9,1,9};

    //init(arr, size, -50, 100);
    cout << "Array: " << convert(arr, size) << endl;

    cout << "Sum of vector values between min and max values is "
        << sum_of_vector_between_min_and_max_values(arr, size) << endl;

    delete[] arr;

    return 0;
}