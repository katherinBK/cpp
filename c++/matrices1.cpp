//rellenar la matriz pidiendole al usuario un numero de filas y columnas


#include <iostream>
using namespace std;

int main(){
    int num[100][10];
    int f=0;
    int c=0;
    int matriz[f][c];

    cout<<"ingrese el numero de filas";
    cin>>f;
    cout<<"ingrese el numero de filas";
    cin>>c;

//almacenando datos en la matriz
    for (int i=0;i<f;i++){ //filas
        for(int j = 0;j<c;j++){//columnas
            cout<<"digite un numero ["<<i<<"]["<<i<<"]";
            cin>>num[i][j];

        }
    }

//mostrando la matriz
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<num[i][j];
        }
        cout<<"\n";
    }



    return 0;
}