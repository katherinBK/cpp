//Ejercicio 1: Generar números aleatorios y guardarlos en un fichero

#include<iostream>
#include<random>
#include<fstream>
using namespace std;

int main(){
    int filas = 4;
    int columnas = 4;
    int matriz[filas][columnas];
    ofstream fich("archivo.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    for ( int f=0;f<filas;f++){
        for (int c=0;c<columnas;c++){
            matriz[f][c] = distrib(gen);
            fich << matriz[f][c]<<"";
        }
    }

    fich.close();
    return 0;
}