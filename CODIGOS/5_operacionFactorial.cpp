#include "5_operacionFactorial.h"
int operacionFactorial::devolverFactorial(){
    int n = getOperador();
    int f = 1;
    if( n < 0) return 0;
    else if( n == 0) return 1;
    else{
        for( int i = 1; i <= n ; i++){
            f = f*i;
        }
        return f;
    }
}