/*
La siguiente función determina la cantidad de cifras que tiene un número:

int 


(int num)

{

    int k=1;

    int cont=0;

    while(k <= num)

    {

        k=k*10;

        cont++;

    }

    return cont;

}

Se pide convertir esta función en una función recursiva.
*/

#include <iostream>

using namespace std;

int cuentaCifrasRecursiva(int numero, int contador = 0) {
    if (numero == 0) {
        return contador;
    }
    return cuentaCifrasRecursiva(numero / 10, contador + 1);
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    int cifras = cuentaCifrasRecursiva(num);
    cout << "El número de cifras en " << num << " es: " << cifras << endl;

    return 0;
}