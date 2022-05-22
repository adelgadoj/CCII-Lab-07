#include "4_multimedia.h"

multimedia::multimedia(string _f, int _p)
{
    formato = _f;
    peso = _p;
}

multimedia::~multimedia()
{
}
void multimedia::imprimirM(){
    cout<<"Formato: "<<formato<<endl;
    cout<<"Peso: "<<peso<<" mb"<<endl;
}