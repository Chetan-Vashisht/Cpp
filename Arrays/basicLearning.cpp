#include <iostream>
using namespace std;

int main()
{
    // int counting[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int  i = 0; i < 10; i++)
    // {
    //     cout<<counting[i]<<endl;
    // }

    // int a[2][2]={1,2,1,2};
    // for (int i = 0; i < 2; i++)
    // {
    //     // for (int j = 0; j <2; j++)
    //     // {
    //         cout<<a[i]<<endl;
    //     // }

    // }

    // int arr[4][4] = {
    //     {0, 0, 0, 0},
    //     {1, 1, 1, 1}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // Write a C++ program to do the following:
    //     Take a 2D array of size 3x3 as input from the user.
    //     Calculate and print the sum of all elements in the array.
    //     Print the 2D array in matrix form.

    // int userInputArray[3][3];
    // int sum=0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "enter " << i + 1 << " element of " << i + 1 << " row : ";
    //         cin >> userInputArray[i][j];
    //         // cout<<endl;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << userInputArray[i][j];
    //         sum+=userInputArray[i][j];
    //         // cout<<endl;
    //     }
    //     cout<<endl;
    // }

    // cout<<"Sum of array is "<<sum;

    //     🔹 Question: Print Row-wise Sum of a 2D Array
    // Write a C++ program to:

    // Take a 3x3 matrix as input from the user.

    // Print the matrix in normal form.

    // Print the sum of each row separately.

    // int userInputArray[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "enter " << i + 1 << " element of " << i + 1 << " row : ";
    //         cin >> userInputArray[i][j];
    //         // cout<<endl;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << userInputArray[i][j];
    //         sum += userInputArray[i][j];
    //         // cout<<endl;
    //     }
    //     cout << endl;
    //     cout << "Sum of row " << i + 1 << " is " << sum;
    //     // sum=0;
    //     cout << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<userInputArray[i-1][j-1]<<endl;
    //     }
    //     cout<<endl;

    // }

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i =0 ; i<10; i++){
        cout<<"Number is "<< numbers[i]<<endl;;
    }

    return 0;
}