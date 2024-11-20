#include <iostream>
#include <stdlib.h>
using namespace std;



int main(){
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);

    system("pause"); //pulse una tecla para continuar

    do{
        cout<<i<<endl;
        i--;
    }while(i>=1);



    return 0;
}