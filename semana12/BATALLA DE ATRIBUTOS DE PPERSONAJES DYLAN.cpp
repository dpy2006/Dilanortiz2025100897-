#include <iostream>
#include <string>

using namespace std;

int main() {
    string n1, n2;
    int f1, f2;

    cout << "Nombre y fuerza del personaje 1: ";
    cin >> n1 >> f1;
    cout << "Nombre y fuerza del personaje 2: ";
    cin >> n2 >> f2;

    if (f1 > f2)
        cout << "El más fuerte es: " << n1 << endl;
    else if (f2 > f1)
        cout << "El más fuerte es: " << n2 << endl;
    else
        cout << "Es un empate." << endl;

    return 0;
}s
