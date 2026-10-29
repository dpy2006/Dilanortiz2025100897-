#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. Estructura del personaje
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// 2. Función para añadir un personaje al archivo
void guardarPersonaje() {
    Personaje p;

    cout << "--- CREAR PERSONAJE ---" << endl;
    cout << "Nombre del héroe: ";
    cin >> p.nombre;
    cout << "Puntos de vida (HP): ";
    cin >> p.vida;
    cout << "Puntos de ataque (ATK): ";
    cin >> p.ataque;

    ofstream archivo("personajes.txt", ios::app);

    if (!archivo.is_open()) {
        cout << "[!] Error al abrir el archivo de guardado." << endl;
        return;
    }

    // Se guarda con un formato de etiquetas fácil de leer
    archivo << "Héroe: " << p.nombre << " | Vida: " << p.vida << " | Ataque: " << p.ataque << endl;

    archivo.close();
    cout << "[+] ¡Personaje registrado con éxito!" << endl;
}

// 3. Función para listar todos los personajes registrados
void mostrarLista() {
    ifstream archivo("personajes.txt");

    if (!archivo.is_open()) {
        cout << "[!] No hay personajes guardados aún o ocurrió un error." << endl;
        return;
    }

    string texto;
    cout << "\n=== REGISTRO DE HÉROES ===" << endl;

    while (getline(archivo, texto)) {
        cout << "- " << texto << endl;
    }

    archivo.close();
}

int main() {
    int eleccion;

    do {
        cout << "\n==========================" << endl;
        cout << "    MENÚ DE PERSONAJES    " << endl;
        cout << "==========================" << endl;
        cout << "1. Agregar personaje" << endl;
        cout << "2. Mostrar personajes" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> eleccion;

        switch (eleccion) {
            case 1:
                guardarPersonaje();
                break;
            case 2:
                mostrarLista();
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "[!] Opción no válida. Intente de nuevo." << endl;
        }
    } while (eleccion != 3);

    return 0;
}
