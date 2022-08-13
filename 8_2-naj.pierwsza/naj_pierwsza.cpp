#include <bits/stdc++.h>
using namespace std;

bool CzyPierwsza (int n){
    for (int i=2; i<n; i++)
        if (n%i == 0) return false;
    return true;
}


int main(){
    
    int i=100;
    bool zlozona=true;

    while(zlozona){
        if (CzyPierwsza(i)==1){
            cout << "\nNajmniejsza trzycyfrowa liczba pierwsza: " << i;
            zlozona=false;
        }
        else i++;
    }
    zlozona=true;
    i=1000;

    while(zlozona){
        if (CzyPierwsza(i)==1){
            cout << "\nNajwieksza trzycyfrowa liczba pierwsza: " << i;
            zlozona=false;
        }
        else i--;
    }
    return 0;
}
