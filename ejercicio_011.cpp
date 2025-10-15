// Archivo generado: ejercicio_011.cpp
// Ejercicio: Buscar elemento en arreglo (lineal)
#include <iostream>
#include <vector>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i]; int target; cin>>target; for(int i=0;i<n;i++) if(a[i]==target){ cout<<"Encontrado en indice "<<i<<"\n"; return 0;} cout<<"No encontrado\n"; return 0; }
