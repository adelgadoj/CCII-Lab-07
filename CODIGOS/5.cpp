#include <iostream>
#include "5_operacionFactorial.h" 
using namespace std;
int main(){
    operacionFactorial uno;
    uno.setOperador(5);
    int ope, fact;
    ope = uno.getOperador();
    cout<<"OPERADOR: "<<ope<<endl;
    fact = uno.devolverFactorial();
    cout<<"FACTORIAL: "<<fact<<endl;
    return 0;
}