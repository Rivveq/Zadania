#include <bits/stdc++.h>
using namespace std;

int main (){

    int z, tab[8];

    for(int i=0; i<=255; i++){
    
        z = i;

        for(int a=0; a <=8; a++){
            tab[a] = {0};          
        }

        for (int a=8; a != 0; a--){
            tab[a] = z % 2;
            z /= 2;
        }

        cout << endl << i << "     ";
        for (int a=0; a <= 8; a++){
            cout << tab[a];
        }
    }

    return 0;
}