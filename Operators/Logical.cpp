#include <iostream>
using namespace std;

int main()
{
    int cupCount;
    bool isStudent = false;
    cout<<"Are you a student? if True Then press 1 or else press 0 :  ";
    cin>>isStudent;
    // cout<<isStudent;
    cout<<"How many cups of tea you want ? ";
    cin>>cupCount;

    if (isStudent==1|| cupCount>15)
    {
        cout<<"You are elegible for tea subscription discount";
        
    }else{
    cout<<"You are Not  elegible for tea subscription discount";
    }


    return 0;
}