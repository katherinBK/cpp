#include <iostream>
using namespace std;

int Main() {
    int edad;
    cout<<"digite su edad";
    cin>>edad;

    if(edad>=18)&&(edad<=25){
        cout<<"su edad esta en el rango de 18 y 25";
    }
    else{
        cout<<"su edad no esta en el rango de 18 y 25";
    }



    return 0;
}