#include <iostream>
using namespace std;
void reverseArray(int *pointer, int size)
{
    int i = 5;
    int arr[5];
    while (i >= 0)
    {
        arr[i] = *pointer;
        *(pointer++);
        i--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    // int number[5]={1, 2, 3, 4, 5};
    // int* numberPointer =number;
    // reverseArray(numberPointer, number[5]);

    int numbers[5] = {1, 2, 3, 4, 5};
    for (int number : numbers)
    {
        cout << number << " " << endl;
    }
    return 0;
}  

// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int size) {
//     // Create a new array to store reversed values
//     int reversed[5];  // or use int reversed[size];

//     for (int i = 0; i < size; i++) {
//         reversed[i] = arr[size - 1 - i];
//     }

//     // Print the reversed array
//     for (int i = 0; i < size; i++) {
//         cout << reversed[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int number[5] = {1, 2, 3, 4, 5};
//     int size = sizeof(number) / sizeof(number[0]);

//     reverseArray(number, size);

//     return 0;
// }
