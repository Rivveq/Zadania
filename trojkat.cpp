#include <iostream>
#include <string>
using namespace std;

int main(){

    string imiona[9];
    
    cout << "Wpisz 10 imion:\n";
    for (int i=0; i <= 9; i++){
        cin >> imiona[i];
    }
    
    for (int i=0; i <= 9; i++){
        cout << imiona;
        if (i == 0 || i == 2 || i== 5 ){
            cout << endl;
        }
    }
    return 0;
}