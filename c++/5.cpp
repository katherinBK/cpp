#include <iostream>
using namespace std;

int main(){
    int edad = 0;
    char sexo[10];  //se le asignan a la variable char 10 espacios
    float altura;

    cout<<"Digite su edad: ";
    cin<<edad;
    cout<<"Digite su sexo";
    cin>>sexo;
    cout<<"Digite su altura en metros:";
    cin>>altura;

    cout<<"\nLa edad es:"<<edad<<endl;
    cout<<"\nEl sexo es:"<<sexo<<endl;
    cout<<"\nLa altura es:"<<altura<<endl;

    
    
    return 0;
}