// Archivo generado: ejercicio_004.cpp
// Ejercicio: Verificar si un numero es primo
#include <iostream>
#include <cmath>
using namespace std;
int main(){ int n; cout<<"Ingrese un entero: "; if(!(cin>>n)) return 0; if(n<=1){ cout<<"No es primo\n"; return 0;} for(int i=2;i<=sqrt(n);i++) if(n%i==0){ cout<<"No es primo\n"; return 0;} cout<<"Es primo\n"; return 0; }
