#include "1_persona.h"
persona::persona(string n, int e)
{
    nombre = n;
    edad = e;
}

persona::~persona()
{
}
void persona::setEdad(int _e){
    edad = _e;
}
void persona::setNombre(string _n)
{
    nombre = _n;
}
void persona::verDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}