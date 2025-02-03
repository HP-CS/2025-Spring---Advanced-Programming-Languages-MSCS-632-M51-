#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;  // Initialize total to 0
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;

    // Example of dynamic memory allocation in C++ using new and delete
    int* arr = new int[4];  // Dynamically allocating memory
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    cout << "Dynamically allocated array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Manually freeing memory
    return 0;
}
