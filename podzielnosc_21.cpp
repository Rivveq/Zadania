#include <bits/stdc++.h>
using namespace std;

bool CzyPodzielna(int n){
    if (n % 21 == 0) return 1;
    else return 0;
}

int main(){
    
    int liczba;
    cout << "Podaj liczbe: "; cin >> liczba;

    if (CzyPodzielna(liczba)==1)
        cout << "\nLiczba jest podzielna przez 7 oraz 3";
    else
        cout << "\n Liczba nie jest podzielna przez 7 oraz 3"; 

    return 0;
}