#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    /*secuencias de escape

    \n salto de linea
    \b retroceso
    \r retorno del carro
    \t tabulador
    */
    printf("Hello 1\nHola 2");
    printf("\nHello 1\bHola 2");
    printf("\nHello 1\rHola 2");
    printf("\nHello 1\tHola 2");
    return 0;
}
