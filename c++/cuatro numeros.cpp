#include <iostream>

int Main(){
    int num1;
    int num2;
    int num3;
    int num4;

    std::cout<<"digite 3 numeros";
    std::cin>>num1,num2,num3;
    std::cout<<"digite otro numero";
    std::cin>>num4;
    
    if (num4 == num1) || (num4 == num2){
        std::cout<<"El numero e ha introducido anteriormente";
    } 
}