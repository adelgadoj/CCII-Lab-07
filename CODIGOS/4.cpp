#include <iostream>
#include "4_disco.h"
using namespace std;
int main(){
    disco uno("mp3", 60, "Mix Musica Criolla");
    disco dos("mp4", 2000 , "Shrek 1" );
    uno.imprimir();
    dos.imprimir();
    return 0;
}