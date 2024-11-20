#include <iostream>
#include <random>

int main(){
    int limite;
    int suma;
    int numero;
    int mayor;
    int menor;
    int producto;

    std::cout<<"ingrese un numero mayor a 0 y menor a 10";
    std::cin>>limite;
    if(limite > 0 && limite<10){
        std::cout<<"el numero ingresado es valido ";
    } else{
        std::cout<<"el numero ingresado no es valido, reinicie el programa";
    }
    std::random_device rd; //inicializacion de la libreria random
    std::uniform_int_distribution <>dis(1,100); //se establece el inicio y el limite de los numeros generados aleatoriamente
    std::mt19937gen(rd()); //generador de numeros
    std::vector<int>array(limite);

    for (num = 0; num <= lim; num++) {
        array[num ] = dis(gen);
        suma += array[num];
    }







    





    return 0;
}