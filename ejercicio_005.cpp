// Archivo generado: ejercicio_005.cpp
// Ejercicio: Generar n terminos de Fibonacci
#include <iostream>
using namespace std;
int main(){ int n; cout<<"Ingrese n: "; if(!(cin>>n)) return 0; long long a=0,b=1; for(int i=0;i<n;i++){ cout<<a; if(i<n-1) cout<<" "; long long c=a+b; a=b; b=c; } cout<<"\n"; return 0; }
