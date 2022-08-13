#include <bits/stdc++.h>
using namespace std;

int main (){

    int x, a, z=1, tab[9];
    cin >> x;

    for (int y=1; y < 10; y++){
        a = x % y;
        if (a == 0){
            tab[z] = y;
            z++;
        }
    }

    for (int y=1; y < z; y++){
        cout << tab[y] << " ";
    }

    return 0;
}