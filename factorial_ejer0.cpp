/*(a) Diseñe la función recursiva que calcule el factorial de un entero N
(b) Diseñe la función recursiva que devuelva la sumatoria de los n primeros enteros. 
Por ejemplo, si n es 5, la sumatoria sería: 1+2+3+4+5 */

#include <iostream>

using namespace std;

int factorialRecursivo(int n)
{
  if(n==0||n==1)
    return 1;
  return n*factorialRecursivo(n-1);
}

int sumatoria(int n)
{
  if(n==1)
    return 1;
  return n+sumatoria(n-1);
}

int main()
{
  int numero;
  cout<<endl<<"Ingrese un numero: ";
  cin>>numero;
  cout<<"Factorial reclusivo";
  cout<<endl<<"El factorial de "<< numero<< " es: "<<factorialRecursivo(numero)<<endl;

  cout<<endl<<"Ingrese un numero: ";
  cin>>numero;
  cout<<"Sumatoria";
  cout<<endl<<"El factorial de "<< numero<< " es: "<<sumatoria(numero);