#include <iostream>
using namespace std;
int main() {
    
    int* ptr = new int;  // Allocate memory dynamically for one integer
    *ptr = 111;  // Assign a value to the allocated memory

    cout << "Allocation value: " << *ptr << endl;

    delete ptr;  // Deallocate the memory manually
    ptr = nullptr;  // Set pointer to nullptr to avoid dangling pointer

    int* arr = new int[4];  // Allocate memory for an array of 4 integers
    for (int i = 0; i < 4; ++i) { // Assigning values to the array
        arr[i] = i * 10;
    }

    cout << "Array items:" << endl;  // Displaying array values
    for (int i = 0; i < 4; ++i) {
       cout << arr[i] << endl;
    }
    
    delete[] arr;  // Use delete[] to free the array memory deallocation

    return 0;
}
