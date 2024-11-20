#include <iostream>

using namespace std;

int main() {
    int limite;
    cout << "Ingrese el número de términos de la secuencia de Fibonacci que desea imprimir: ";
    cin >> limite;

    int a = 0; 
    int b = 1; 
    int contador = 0;

    cout << "Secuencia de Fibonacci: ";

    while (contador < limite) {
        cout << a << " "; 
        int siguiente = a + b; 
        a = b; 
        b = siguiente; 
        contador++;
    }

    cout << endl; 
    return 0;
}