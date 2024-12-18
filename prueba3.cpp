//Ejercicio 3: Transponer una matriz y guardarla en un fichero
#include <iostream>
#include<fstream>
#include<random>
using namespace std;

int main(){
    int filas = 3;
    int columnas = 3;
    int matriz[filas][columnas];
    ofstream fichero("archivo.txt");
    ofstream fichero2("transpuesta.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    for(int f = 0;f<filas;f++){
        for(int c=0;c<columnas;c++){
            matriz[f][c] = distrib(gen);
            fichero << matriz[f][c];
             matriz[f][c] = matriz[c][f];
             fichero2 << matriz[f][c];
        }
    }

    fichero.close();
    fichero2.close();
    return 0;
}