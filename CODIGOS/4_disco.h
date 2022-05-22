#include <iostream>
#include "4_multimedia.h"
using namespace std;
class disco : public multimedia
{
private:
    string nombre;
public:
    disco(string, int, string );
    ~disco();
    void imprimir();
};

