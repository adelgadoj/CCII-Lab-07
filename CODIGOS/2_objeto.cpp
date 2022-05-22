#include "2_objeto.h"
objeto::objeto(int _R, int _G, int _B, string mat, string _nombre) : color(_R, _G, _B), material(mat)
{
    nombre = _nombre;
}

objeto::~objeto()
{
}
void objeto::verDatos(){
    cout<<"OBJETO: "<<nombre<<endl;
    cout<<"COLOR RGB: "<<R<<","<<G<<","<<B<<endl;
    cout<<"MATERIAL: "<<mat<<endl;

}