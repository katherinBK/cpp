#include <iostream>
#include <fstream>
#include <random>

using namespace std;

int main() {
    const int filas = 5;
    const int columnas = 5;
    int Max = -1; // Inicializa Max a un valor bajo
    int matriz[filas][columnas];
    ofstream fichero("archivo.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 20);

  
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) { 
            matriz[f][c] = distrib(gen);
            fichero << matriz[f][c] << " ";
           
            if (matriz[f][c] > Max) {
                Max = matriz[f][c]; 
            }
        }
        fichero << endl; 
    }

    fichero << "El máximo es: " << Max << endl; 
    cout << "El máximo es: " << Max << endl; 

    fichero.close();
    return 0;
}