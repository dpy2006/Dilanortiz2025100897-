/*ejercicio 2 */
#include <iostream>
using namespace std;

int main() {
    int opciones;
    cout << "Elije una opccion " << endl;
    cout << "1-Suma:" << endl; 
    cout << "2-resta:" << endl; 
    cout << "3-multiplicacion:" << endl; 
    cout << "4-division:" << endl; 
    cin >> opciones;
    double a, b;
    cout << "Ingresa los dos numeros: " << endl;
    cin >> a >> b;

    switch (opciones) {
        case 1: cout << "Resultado: " << a + b << "\n"; break;
        case 2: cout << "Resultado: " << a - b << "\n"; break;
        case 3: cout << "Resultado: " << a * b << "\n"; break;
        case 4: 
            if (b != 0) cout << "Resultado: " << a / b << "\n";
            else cout << "Error: Division por cero\n";
            break;
        default: cout << "Opcion invalida\n";
    }
    return 0;
}
