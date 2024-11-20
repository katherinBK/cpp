#include <iostream>
using namespace std;

int main(){
    float practica,teorica,participacion, notaFinal;
    cout<<"Digite la nota de practica";
    cin>>practica;
    cout<<"Digite la nota de teorica";
    cin>>teorica;
    cout<<"Digite la nota de participacion";
    cin>>participacion;

    practica *= 0.30;  //esto es igual que escribir practica = practica+ 0.30
    teorica*=0.30;
    participacion*0.10;

    notaFinal = teoica + practica + participacion;




    return 0;
}