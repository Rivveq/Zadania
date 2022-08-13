#include <bits/stdc++.h>
using namespace std;

int main (){

    int x, tab[2], bin[7], binsum[7];
    cout << "Wprowadz 2 liczby calkowite dwucyfrowe\n";

    for (int i=1; i<=2; i++){
        cin >> tab[i];
    }

    x = tab[1] + tab [2];

    for (int y=1; y<=2; y++){

        for (int i=0; i<=8; i++){
            bin[i] = {0};
        }
        for (int i=8; i != 1; i--){
            bin[i] = tab[y] % 2;
            tab[y] /= 2;
        }

        cout << "\nBinarna postac: ";
        for (int i=1; i <= 8; i++){
            cout << bin[i];
        }
    }

    for (int i=8; i != 1; i--){
        binsum[i] = x % 2;
        x /= 2;
    }
    cout << "\nBinarna postac sumy tych liczb: ";
    for (int i=1; i <= 8; i++){
        cout << binsum[i];
    }


    return 0;
}