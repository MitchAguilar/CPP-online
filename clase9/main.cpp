#include <iostream>
#include <cstdio>
/*
    notacion cientifica
*/
using namespace std;

int main()
{
    int valor1= 3e3;
    double valor2= 5.3e3;
    double valor3=1.222e-3;

    printf("valor entero: %i\n",valor1);//ojo idiota i etero
    printf("valor doble: %f\n",valor2);//f flotante sirve para lso flotantes y para los dobles
    printf("valor doble 2: %f\n",valor3);
    return 0;

}
/*
char (carácter): “%c”
int y long (entero): “%i” o “%d”
float y double (real en coma flotante): “%f” (notación decimal float),
 “%lf” (notación decimal double), “%g” (notación decimal corta) o “%e” (notación científica)
*/

