#include <iostream>
using namespace std;

int main()
{
    string chain;
    int dl;

    cout << "Podaj lancuch: "; cin >> chain;
    cout << endl;

    dl = chain.length();

    for (int i = 0; i < dl; i++)
    {
        if (chain[i] >= 'A' && chain[i] <= 'Z')
        {
            cout << chain[i];
        }
    }
    return 0;
}