//Ejercicio 2: Leer una matriz de un fichero y calcular su suma

#include<iostream>
#include <fstream>
#include<random>
using namespace std;

int main(){
    int suma = 0;
    ifstream fichero("archivo.txt");
    int filas = 3;
    int columnas = 0;
    int matriz[filas][columnas];

    for(int f = 0; f<filas;f++){
        for(int c=0;c<columnas;c++){
            fichero >> matriz[f][c];
            suma += matriz[f][c];
        }
    }
     cout <<"La suma de los archivos es:" <<suma<<endl;
    fichero.close();
    return 0;
}
