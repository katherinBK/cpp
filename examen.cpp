#include <iostream>
#include <fstream>
#include <random>

using namespace std;

bool esRaizCuadradaExacta(int numero) {
    int raiz = 0;
    while (raiz * raiz < numero) {
        raiz++;
    }
    return (raiz * raiz == numero);
}

int main() {
    const int tamaño = 9;
    int matriz[tamaño][tamaño];
    ofstream fichero("matriz.txt");

    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 99);

    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matriz[i][j] = distrib(gen);
            fichero << matriz[i][j] << " "; 
        }
        fichero << endl; // una nueva línea después de cada fila
    }

    fichero.close(); 

    // Analizar el fichero
    ifstream inputFile("matriz.txt");
    if (!inputFile) {
        cout << "Error al abrir el fichero." << endl;
        return 1;
    }

    int valores[81]; // Máximo de 81 valores (9x9)
    int contador = 0;
    int numero;

    // Leer los valores del fichero y buscar raíces cuadradas exactas
    while (inputFile >> numero) {
        if (esRaizCuadradaExacta(numero)) {
            valores[contador++] = numero; // Guardar el valor en el vector
        }
    }

    inputFile.close(); 

    // Informar y mostrar resultados
    if (contador == 0) {
        cout << "No se encontraron valores con raíz cuadrada exacta." << endl;
    } else {
        cout << "Valores con raíz cuadrada exacta en orden inverso:" << endl;
        for (int i = contador - 1; i >= 0; i--) {
            cout << valores[i] << " ";
        }
        cout << endl;
    }

    return 0;
}