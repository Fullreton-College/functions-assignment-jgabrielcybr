#include <iostream>
using namespace std;

double getCoinValue();
double getChange(double total);

int main()
{
    double total = 0.00;
    double change = 0.00;

    cout << "If you want to get a twinkie, you must pay $3.50! To pay, you must input a coin" << endl;
    cout << "Dollar (d)" << endl;
    cout << "Quarter (q)" << endl;
    cout << "Dime (i)" << endl;
    cout << "Nickel (n)" << endl;

    while(total < 3.50)
    {
        total += getCoinValue();
        cout << "The remaining balance is: $" << 3.50 - total << endl;
    }

    cout << "You got your twinkie!" << endl;
    cout << "Your change is: " << getChange(total) << endl;

    return 0;
}

double getCoinValue()
{
    char coin;
    double value;
    cout << "What coin will you put in? (d, q, i, n)" << endl;
    cin >> coin;

    switch(coin)
    {
        case('d'):
        {
            value = 1.00;
            cout << "You have inputted a dollar!" << endl;
            break;
        }
        case('q'):
        {
            value = 0.25;
            cout << "You have inputted a quarter!" << endl;
            break;
        }
        case('i'):
        {
            value = 0.10;
            cout << "You have inputted a dime!" << endl;
            break;
        }
        case('n'):
        {
            value = 0.05;
            cout << "You have inputted a nickel!" << endl;
            break;
        }
    }

    return value;
}

double getChange(double total)
{
    double change = (total - 3.5);
    return change;
}
