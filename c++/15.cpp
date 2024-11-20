#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"ingrese un numero";
    cin>>num;
    if(num % 2 == 0){
        cout<<"el numero es par";
    } else{
        cout<<"el numero es impar";
    }
    return 0;
}