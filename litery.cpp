#include <iostream>
#include <string>
using namespace std;

char litery[25]; //25 poniewaz jest 26 liter w alfabecie łacińskim

bool porownywanie(string slowo_1, string slowo_2){

    int dlugosc_1 = slowo_1.length();
    int dlugosc_2 = slowo_2.length();
    int miejsce = 0;

    char znak_1[dlugosc_1];
    char znak_2[dlugosc_2];

    for (int i=0; i <= dlugosc_1; i++){
        znak_1[i] = slowo_1[i];
        for (int j=0; j <= dlugosc_2; j++){
            znak_2[j] = slowo_2[j];
            if (znak_1[i] == znak_2[j]){
                for (int z=0; z<= 25; z++){
                    if (litery[z] == znak_2[j]) break;
                    else if (z == 25){
                        litery[miejsce] = znak_2[j];
                        miejsce++;
                    }
                }
            }
        }
    }

    if (miejsce == 0) return false;
    else return true;
}

int main(){
    
    string slowo_1, slowo_2;
    cout << "Wprowadz dwa slowa: \n";
    cin >> slowo_1; cin >> slowo_2;

    if (porownywanie(slowo_1, slowo_2) == true){
        cout << "Powtarzajace sie litery:\n";
        for (int x=0; x <= 25; x++)
            cout << litery[x] << " ";
    }
    else cout << "Slowa nie maja powtarzajacych sie liter";

    return 0;
}
