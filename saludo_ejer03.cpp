/*Diseñe la función recursiva que imprima N veces un saludo 
en pantalla */

#include <iostream>

using namespace std;

int factorialRecursivo(int n)
{
  if(n==0||n==1)
    return 1;
  return n*factorialRecursivo(n-1);
}

void imprimirSaludo(int n) 
{
  if (n > 0) 
  {
    cout<<endl<<n<<" (Ecuador!!!)";
    imprimirSaludo(n - 1);
  }
}

int main()
{
  int numero;
  cout<<endl<<"Ingrese la cantidad a repetir: ";
  cin>>numero;
  cout<<"Mensaje";
  imprimirSaludo(numero);

  return 0;
}