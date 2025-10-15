// Archivo generado: ejercicio_009.cpp
// Ejercicio: Maximo y minimo en un arreglo
#include <iostream>
#include <vector>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i]; int mx=a[0], mn=a[0]; for(int x:a){ if(x>mx) mx=x; if(x<mn) mn=x;} cout<<"Max="<<mx<<" Min="<<mn<<"\n"; return 0; }
