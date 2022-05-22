#include "4_disco.h"
#include <iostream>
using namespace std;
disco::disco(string _f, int _p, string _n) : multimedia(_f, _p)
{
    nombre = _n;
    
}

disco::~disco()
{
}
void disco::imprimir(){
    cout<<"\nNombre: "<<nombre<<endl;
    imprimirM();
}