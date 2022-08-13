#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int ilosc_porwtorzen = 0;
    string wzorzec, wyraz;
    cout << "Wprowadz wzorzec: "; cin >> wzorzec;

    while(wyraz != "***"){
        cin >> wyraz;
        if(wyraz == wzorzec)
            ilosc_porwtorzen++;
    }
    cout << "Wzorzec wystapil " << ilosc_porwtorzen << " razy.";

    return 0;
}