#include <iostream>
using namespace std;

int main()
{
    int teaBags;
    cout << "How Many Tea Bags you would like to have : ";
    cin >> teaBags;

    if (teaBags <= 20)
    {

        if (teaBags >= 10)
        {

            cout << "You have purchased " << teaBags << " tea bags so you are a \"Silver\" user";
        }
    }
    if (teaBags > 20)
    {

        cout << "You have purchased " << teaBags << " tea bags so you are a \"Gold\" user";
    }

    return 0;
}