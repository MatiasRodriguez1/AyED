#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const float Pi = 3.141592;

int main(void)
{
 
    float numero = 0, suma;
    size_t contador = 0;

    while (numero != Pi/4)
    {
        suma = pow(-1,contador)/((2 * contador) + 1);
        numero+= suma;
        contador ++;
    };

    cout<< setprecision (6)<< fixed;
    cout<< "Pi es igual a: "<< numero * 4 << " y llegamos a el en "<< contador<< " iteraciones";

    return 0;
}
