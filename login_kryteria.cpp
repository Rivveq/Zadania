#include <iostream>
#include <string>

using namespace std;

bool CzyPoprawnyAdres(string adres){
    
    int dlugosc = adres.length();
    
    int i=0;
    while (adres[i]!='@' && i < dlugosc - 1) i++;
    if (adres[i]!='@' || i<2) return false;
    
    int j = dlugosc -1;
    while (adres[j]!='@') j--;
    if (j!=i) return false;
    
    int k = dlugosc - 1;
    while (adres[k]!='.' && k>0) k--;
    if (adres[k]!='.' || !(k==dlugosc-3 || k==dlugosc-4)) return false;

    if (k==dlugosc-3 && j>=dlugosc-4 || k==dlugosc-4 && j>=dlugosc-5) return false;

    return true;
}

int main(){

    const string INF_OK = "Haslo do serwisu wyslalismy na adres:  ";
    const string INF_ADRES_ROZNE = "Podane adresy sie nie zgadzaja!";
    const string INF_ADRES_BLAD = "Podany adres jest bledny!";

    string imie, nazwisko, adres_1, adres_2;
    
    cout << "Podaj imie:  "; cin >> imie;
    cout << "Podaj nazwisko:  "; cin >> nazwisko;
  
    cout << "Podaj adres e-mail:  "; cin >> adres_1;
    
    if (CzyPoprawnyAdres(adres_1)==false){
        cout << endl << INF_ADRES_BLAD << endl;
        return 0;
    }
    if (CzyPoprawnyAdres(adres_1)){
        cout << "Powtorz adres e-mail:  "; 
        cin >> adres_2;  cout << endl;
        
        if (adres_1 == adres_2)
            cout << INF_OK  << adres_1 << endl;
        else
            cout << INF_ADRES_ROZNE << endl;
    }
    return 0;
}