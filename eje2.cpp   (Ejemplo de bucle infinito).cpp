#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int contador = 1;
    while (contador < 100) {
        cout << contador << endl;
        contador--; // Decrementa en 1, lo que produce un bucle infinito
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
