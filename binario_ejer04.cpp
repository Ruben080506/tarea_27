/* Diseñe la función recursiva que convierta un entero en binario.
*/

#include <iostream>

using namespace std;

string binario(int num)
{
    string aux = "";
    while(num>0)
    {
        int resto = num % 2;
        aux = to_string(resto) + aux;
        num = num/2;
    }
    return aux;
}

string binarioRecursivo(int num) 
{
    if (num == 0)
        return "";
    return binarioRecursivo(num / 2) + to_string(num % 2);

}

int main()
{
  int numero;
  cout<<endl<<"Ingrese un numero: ";
  cin>>numero;
  cout<<"Binaria";
  cout<<endl<<"El numero "<< numero<< " en binario es: "<<binarioRecursivo(numero)<<endl;
}