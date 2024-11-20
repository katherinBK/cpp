#include<iostream>
#include <iostream>
using namespace std;
 int main(){
    int limite;
    int suma;
    int numero;
    int mayor;
    int menor;
    int producto;
    srand(time(0));

    cout<<"ingrese un numero mayor a 0 y menor a 10";
    cin>>limite;
    if(limite > 0 && limite<10){
        cout<<"el numero ingresado es valido ";
    } else{
        cout<<"el numero ingresado no es valido, reinicie el programa";
    }
    for (int i=0; i<limite;i++){
        cout<<rand ()<<" ";
        cin>>numero;
    }
}

