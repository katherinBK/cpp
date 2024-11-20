#include <iostream>
using namespace std;

int main(){
    int num[100][100];
    int filas;
    int columnas;
    char flag = 'F';

    cout<<"digite un numero de filas";
    cin>>filas;
    cout<<"digite un numero de columnas";
    cin>>columnas;

    for (int i =0; i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<"digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>num[i][j];
        }
    }
    if(filas==columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(num[i][j] == num[j][i]){
                    flag = 'V';
                }

            }
        }

    }
    if (flag == 'V'){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica";
    }
}