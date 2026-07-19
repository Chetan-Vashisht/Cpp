#include <iostream>
using namespace std;

int main()
{
    int teaBag;
    cout<<"Enter Tea bag Quantity :  ";
    cin>>teaBag;
    if (teaBag <= 10)
    {
        teaBag += 5;
        cout << "Total number of bag now is : " << teaBag;
    }
    else
    {
        teaBag += 10;
        cout << "Total number of bag now is : " << teaBag;
    }

    return 0;
}