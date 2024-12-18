//Crea un programa que genere una matriz de tamano a definir por el usuario con números aleatorios entre 1 y 99. Encuentra el menor y el mayor de los números, 
//calcula la suma y la resta entre ambos, 
//y guarda la matriz y los resultados en un fichero llamado resultados.txt.

#include <iostream>
#include<fstream>
#include<random>
using namespace std;

int main(){
    int mayor;
    int menor;
    int cuadrado;
    int filas;
    int columnas;
    int sumaResultados;
    int sumaNum = 0;
    int totales = filas * columnas; //cantidad de numeros que hay en la matriz
    int matriz[filas][columnas];
    ofstream fichero("resultados.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distrib(1,99);
    
    cout<<"Ingrese el numero de filas";
    cin>>filas;
    cout<<"Ingrese el numero de columnas";
    cin>>columnas;

    for(int f=0;f<filas;f++){
        for(int c=0;c<columnas;c++){
            matriz[f][c] = distrib(gen);
            sumaNum += matriz[f][c];

            if (matriz[f][c] < menor){
                menor = matriz[f][c] ;
            }
            if (matriz[f][f] > mayor){
                mayor = matriz[f][c];
            }

        }

    }
    int suma = mayor + menor;
    int promedio = suma/totales;
    int resta = mayor - menor;
    int cuadrado_menor = menor * menor;  // Cuadrado del menor

    // Guardar resultados en el fichero
    fichero << "Matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            fichero << matriz[i][j] << " ";
        }
}
    fichero << "\nResultados:\n";
    fichero << "Menor: " << menor << "\n";
    fichero << "Mayor: " << mayor << "\n";
    fichero << "Suma (Mayor + Menor): " << sumaResultados << "\n";
    fichero << "Resta (Mayor - Menor): " << resta << "\n";
    fichero << "Cuadrado del Menor: " << cuadrado_menor << "\n";
    fichero << "Promedio: " << promedio << "\n";
    fichero.close();
    return 0;
}