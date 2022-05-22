#include <iostream>
#include "1_alumno.h"
using namespace std;
int main(){

    alumno a1("alex", 22);
    a1.setNombre("Roberto Rodriguez");
    a1.setEdad(27);
    a1.verDatos();
    return 0;
}