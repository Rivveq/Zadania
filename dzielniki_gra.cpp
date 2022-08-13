#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int gracz1,gracz2,punkty1,punkty2;
    cout << "Prosze podac liczbe 6-cyfrowa:\n";
    cout << "Gracz 1 - "; cin >> gracz1;
    cout << "Gracz 2 - "; cin >> gracz2;

    for (int i=1; i<gracz1; i++)
        if (gracz1%i==0) punkty1++;
    for (int i=1; i<gracz2; i++)
        if (gracz2%i==0) punkty2++;

    if (punkty1>punkty2) cout << "\nGracz 1 wygral!";
    else cout << "\nGracz 2 wygral!";

    return 0;
}