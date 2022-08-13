#include <bits/stdc++.h>
using namespace std;

bool CzyPierwsza(int x){

    if (x==2) return 1;
    if (x%2==0) return 0;

    int pierwiastek = sqrt(x);
    for (int i=3; i<=pierwiastek; i+=2)
        if (x%i==0) return 0;
    return 1;
}

int main(){
    
    int liczba1, liczba2;
    cout << "Podaj po kolejno 2 liczby: " << endl; cin >> liczba1; cin >> liczba2;

    int  i = liczba1 + liczba2;
    if (CzyPierwsza(i)==0)
        cout << "Suma tych liczb nie jest liczba pierwsza";
    else
        cout << "Suma tych liczb jest liczba pierwsza!";
    return 0;
}