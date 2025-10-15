// Archivo generado: ejercicio_012.cpp
// Ejercicio: Sumar elementos de un vector
#include <iostream>
#include <vector>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); long long sum=0; for(int i=0;i<n;i++){ cin>>a[i]; sum+=a[i]; } cout<<"Suma="<<sum<<"\n"; return 0; }
