#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Challenge 1: While Loop
    //     Write a program that keeps asking the user to input the number of tea bags they have left. Stop when the number of bags is 0, and print a message that they are out of tea bags.

    // int numberOfBags;

    // cout << "How Many bags do you have ? ";
    // cin >> numberOfBags;
    // while (numberOfBags > 0)
    // {
    //     cout << "How Many bags do you have ? ";
    //     cin >> numberOfBags;
    //     if (numberOfBags == 0)
    //     {
    //         cout << "You are out of bags !!";
    //     }
    // }

    //--------------------------------------------------------------------------
    // Challenge 2: Do-While Loop
    //     Write a program that asks the user if they want to add more sugar to their tea. Keep asking until they respond with "enough." Use a do-while loop for this.
    // string respons;

    // do
    // {
    //     cout << "do you want to add more sugar to the tea ? yes to add more sugar and enough for no \n";
    //     cin >> respons;
    //     if (respons == "yes")
    //     {
    //         cout << "More sugar is added to the tea\n";
    //     }
    //     if (respons == "enough")
    //     {
    //         cout << "user do not want more sugas as they selected enough\n";
    //     }

    // } while (respons != "enough");

    //--------------------------------------------------------------------------

    // Challenge 3: For Loop
    //     Create a program that prints the first 10 multiples of 2, representing the total tea bags required for making batches of tea.
    // for (int i = 2; i <= 20; i += 2)
    // {
    //     cout << "multiple of 2 is " << i << endl;
    // }

    //--------------------------------------------------------------------------

    // Challenge 4: Break and Continue
    //     Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break.

    // string teaList[3] = {"Herbal Tea", "Lemon Tea", "No Tea"};

    // for (int i = 0; i < 3; i++)
    // {
    //     if (teaList[i] == "Herbal Tea")
    //     {
    //         continue;
    //     }
    //     else if (teaList[i] == "No Tea")
    //     {
    //         break;
    //     }
    //     cout << "Serving " << teaList[i];
    // }

    //----------------------------------------------------------------------

    // Challenge 5: Nested Loops
    //     Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
    // string meal[3] = {"breakfast", "lunch", "dinner"};
    // string weekDay[7] = {"Monday", "Tuedsay", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j <= 2; j++)
    //     {
    //         cout << "Brewing 2 cup of tea for " << meal[j] << " on " << weekDay[i] << endl;
    //     }
    //     cout << endl;
    // }
    // return 0;
}