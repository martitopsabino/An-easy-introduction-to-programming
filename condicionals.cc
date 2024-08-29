#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int nombre_gran = 0;
    // objectiu: mostrar el nombre més gran

    if (a > b) {
        nombre_gran = a;
    }else {
        nombre_gran = b;
    }
    
    cout << "El nombre més gran que m'has donat és el: " << nombre_gran << endl;
}