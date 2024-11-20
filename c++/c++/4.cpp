#incluude <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout<<"Digite un numero: "; 
    cin>>num1;
    cout<<"Digite otro numero";
    cin>>num2;
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1/num2;

    cout<<"\nLa suma es:"<<suma<<endl;
    cout<<"\nla resta es:"<<resta<<endl;
    cout<<"\nLa multiplicacion es:"<<multiplicacion<<endl;
    cout<<"\nLa division es:"<<division<<endl;

    return 0;
}