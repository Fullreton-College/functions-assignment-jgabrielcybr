#include <iostream>
#include <cstdlib>

using namespace std;

string coinFlip();

int main()
{
    int a; //attempts
    srand(2);

    cout << "How many times would you like to flip the coin?" << endl;
    cin >> a;

    for(int i = 0; i < a; i++)
    {
        cout << coinFlip();
    }

    return 0;
}

string coinFlip()
{
    int value = 0;
    string results;

    value = rand() % 2;

    if(value == 0)
    {
        results = "Heads! ";
    }
    else{
        results = "Tails! ";
    }

    return results;
}
