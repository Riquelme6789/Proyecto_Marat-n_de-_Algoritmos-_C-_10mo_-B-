// Archivo generado: ejercicio_003.cpp
// Ejercicio: Factorial de un numero (iterativo)
#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese n (>=0): "; if(!(cin>>n)) return 0; unsigned long long f=1; for(int i=2;i<=n;i++) f*=i; cout<<"Factorial = "<<f<<"\n"; return 0; }
