#include<iostream>
using namespace std;

int main() {
    double  a, b, c, d, e;
    cout << "Vvedite summu vklada(rub.):";
    cin >> c;
    cout << "Vvedite srok vklada(dni):";
    cin >> b;
    cout << "Vvedite procentnuyu stavku(% godovie):";
    cin >> a;
    d = ((a / 100 * c) / 365) * b;
    e = d + c;
    cout << "Dohod: " << d << " rub." << endl;
    cout << "Summa: " << e << " rub.";
}
