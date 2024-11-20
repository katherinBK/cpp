#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"ingrese un numero del 1 al 10";
    cin>>num;
    if(num >= 1 && num <=10){
        for (int i=1;i<=12;i++){
            cout<<num<<"*"<<i<<" = "<<num*i<<endl;
        }

    }else{
        cout<<"ingrese otro valor";
    }


    return 0;
}