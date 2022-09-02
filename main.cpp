// Author: Fransiskus Agapa
// 9/2/22
// Practices make improvement - Have Fun !!!
// :)

// ============================
// user input name of fast food, its price, and Taste rating 1 - 5
// ============================

#include <iostream>
#include "FastFood.h"
#include "CapitalizeWord.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string choice;                                  // user choice
    FastFood* fastFood;                             // pointer to new allocated memory - default constructor called
    bool thereIsData;                               // indicate user has input data or not
    cout << "\n== US Fast Food ==" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Display Data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            cout << "\n= Input Fast Food =" << endl;
            string fastFoodName;
            double fastFoodPrice;
            int fastFoodTasteRate;

            // name
            cout << "\nInput name of fast food: ";
            while(fastFoodName.size() == 0)                                                                             // keep asking while no input from user
            {
                getline(cin, fastFoodName);
            }
            Capitalize(fastFoodName);
            cout << endl;

            // price
            cout << "Input price of fast food:$ ";
            cin >> fastFoodPrice;
            cout << endl;

            // quantity
            cout << "Rate the taste of fast food ( 1 - 5 ): ";
            cin >> fastFoodTasteRate;
            cout << endl;

            fastFood = new FastFood(fastFoodName, fastFoodPrice, fastFoodTasteRate);
            cout << "[ Data Submitted ]" << endl;
            thereIsData = true;
            cout << endl << "====================" << endl;
        }
        else if(choice == "2")
        {
            cout << "\n= Display Fast Food =" << endl;
            if(thereIsData)
            {
                cout << "\nFast Food: " << fastFood->GetName() << endl;
                cout << "Price: " << fastFood->GetPrice() << endl;
                cout << "Taste Rating: " << fastFood->GetTasteRating() << endl;
                cout << endl << fastFood->toJson() << endl;
            }
            else
            {
                fastFood = new FastFood;                              // default constructor called
                cout << "\nFast Food: " << fastFood->GetName() << endl;
                cout << "Price: " << fastFood->GetPrice() << endl;
                cout << "Taste Rating: " << fastFood->GetTasteRating() << endl;
            }

            cout << endl << "=======================" << endl;
        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== US Fast Food ==" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Display Data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
