#include <bits/stdc++.h>
using namespace std;

int losuj(){
    srand(time(0));
    return (rand() % 100+1);
}

int main (){

    int a,proby=1,liczba=losuj();
    cout << "Zgadywanie liczb z przedzialu [0; 100]" << endl;

    while (a!=liczba){

        cout << "\nProba " << proby << ": ";
        cin >> a;

        if (a>liczba){
            cout << "Za duza\n";
            proby++;
        }
        if (a<liczba){
            cout << "Za mala\n";
            proby++;
        }
        if (a==liczba){
            cout << "\nBrawo! Udalo ci sie za " << proby << " razem";
        }
    }
    
    return 0;
}