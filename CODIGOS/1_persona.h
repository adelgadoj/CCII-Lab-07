#include <iostream>
using namespace std;
class persona
{
private:
    string nombre;
    int edad;
public:
    persona(string, int);
    ~persona();
    void setNombre(string);
    void setEdad(int);
    void verDatos();
};

