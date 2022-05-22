#include "2_color.h"
#include "2_material.h"

class objeto : public color , public material
{
private:
    string nombre;
public:
    objeto(int, int, int , string, string) ;
    ~objeto();
    void verDatos();
};


