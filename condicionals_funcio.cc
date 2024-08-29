#include <iostream>
using namespace std;

int mes_gran (int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int nombre_gran = mes_gran(mes_gran(a, b), mes_gran(c, d));
    
    cout << "El nombre més gran que m'has donat és el " << nombre_gran << endl;
}