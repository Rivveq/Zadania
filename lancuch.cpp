#include <iostream>
#include <string>
using namespace std;

void zliczanie(string wyraz){
    int dlugosc = wyraz.length();
    char poprzednia_litera;
    char wyraz_char[dlugosc];
    int x;
    for (int x = 0; x <= dlugosc; x++)
        wyraz_char[x] = wyraz[x];
        if (poprzednia_litera == wyraz_char[x]){
            
        }

}

int main(){
    string wyraz;
    cout << "Wprowadz lancuch liter: "; cin >> wyraz;

    return 0;
}