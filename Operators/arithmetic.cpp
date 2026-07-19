#include <iostream>
using namespace std;

int main() {
    int numberOfCups; 
    double pricePerCup, totalPrice, discountedPrice;
    cout<<"Enter The Number of cups you want to order : ";
    cin>>numberOfCups;
    cout<<"Enter The price per cups  : ";
    cin>>pricePerCup;

    totalPrice = numberOfCups *pricePerCup;
    if (totalPrice >100)
    {
        discountedPrice = totalPrice - (totalPrice*0.05);
        cout<<"Your total price after discount is : "<<discountedPrice;
    }
    else{
        cout<<totalPrice<<" is your final bill";
    }


    

    return 0;
}