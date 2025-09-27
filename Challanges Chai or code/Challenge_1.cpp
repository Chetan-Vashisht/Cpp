#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Challenge 1:
    //          Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences    Hint: Use \n for new lines and " to quote the tea name.
    string tea1 = "lemonTea";
    string tea2 = "hotTea";
    string tea3 = "coldTea";

    float price_tea1 = 2.01;
    float price_tea2 = 1.02;
    float price_tea3 = 2.00;

    char rating_tea1 = 'A';
    char rating_tea2 = 'B';
    char rating_tea3 = 'C';

    cout << "Name of Tea 1 = \"" << tea1 << "\"\t" << "Price = " << price_tea1 << "\t" << "Rating = " << rating_tea1 << endl;
    cout << "Name of Tea 2 = \"" << tea2 << "\"\t" << "Price = " << price_tea2 << "\t" << "Rating = " << rating_tea2 << endl;
    cout << "Name of Tea 3 = \"" << tea3 << "\"\t" << "Price = " << price_tea3 << "\t" << "Rating = " << rating_tea3 << endl;

    // Challenge 2:
    // Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting. Hint: Use both float and int types, and demonstrate type casting.

    // float price = 0, price_increase_by_10_persent, newPrice;
    // cout << "Enter price : ";
    // cin >> price;
    // price_increase_by_10_persent = price * 0.1;

    // newPrice = (int)(price + price_increase_by_10_persent);
    // cout << "Price of the tea is " << newPrice;

    // Challenge 3:
    // Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.  Hint: Combine cin and getline carefully to avoid input issues.

    // string favoriteTea;
    // int numberOfTeaCup;
    // cout<<"Hi! User Enter Your Your Favorite tea : \n";
    // getline(cin,favoriteTea);
    // cout<<"And How Many Cup of it you like to order !! \n";
    // cin>>numberOfTeaCup;
    // cout<<"User Favorite Tea is "<< favoriteTea << " and he is drinking its "<<numberOfTeaCup<<" cups";

    return 0;
}