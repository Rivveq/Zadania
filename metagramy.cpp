#include <bits/stdc++.h>
using namespace std;

bool porownanie(string slowo1, string slowo2){

    int roznica = 0;
    int dlugosc1 = slowo1.length();
    int dlugosc2 = slowo2.length();
    char char1[dlugosc1];
    char char2[dlugosc2];

    if (dlugosc1 != dlugosc2) return false;

    for (int i=0; i <= dlugosc1; i++){
        char1[i] = slowo1[i];
        char2[i] = slowo2[i];
        if (char1[i] != char2[i]) roznica++;
    }

    if (roznica == 1) return true;
    else return false;
}

int main(){
    
    string slowo1, slowo2;
    cout << "Wprowadz 2 slowa do porownania: \n";
    cin >> slowo1; cin >> slowo2;

    if (porownanie(slowo1, slowo2) == true) cout << "Te dwa slowa sa metagramami";
    else cout << "Te dwa slowa nie sa metagramami";

    return 0;
}
