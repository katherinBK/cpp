#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Ingrese el primer valor";
    cin>>num1;
    cout<<"Ingrese el segundo valor";
    cin>>num2;

    if( num1!= num2 && num1>num2){
        cout<<"El mayor es:"<<num1;
    } else{
        if(num1!=num2 && num1<num2){
            cout<<"el mayor es:"<<num2;
        } else{
         cout<<"son iguales";
        }
    }

    return 0;
}