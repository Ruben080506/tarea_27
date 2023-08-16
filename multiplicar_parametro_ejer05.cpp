/*
Defina la función recursiva que imprime una tabla de multiplicar.
La función recibe 2 parámetros enteros: el primero representa la tabla de multiplicar,
y el segundo representa el número límite hasta donde se imprimirá la tabla.
*/

#include <iostream>

using namespace std;

void TablaMultiplicar(int tabla, int limite, int multiplicador = 1) 
{
    if (multiplicador <= limite) 
    {
        int resultado = tabla * multiplicador;
        cout << tabla << " x " << multiplicador << " = " << resultado << endl;
        TablaMultiplicar(tabla, limite, multiplicador + 1);
    }
}

int main() 
{
    int tabla, limite;
    cout << "Ingrese el número de la tabla de multiplicar: ";
    cin >> tabla;
    cout << "Ingrese el límite de la tabla de multiplicar: ";
    cin >> limite;

    TablaMultiplicar(tabla, limite);

    return 0;
}