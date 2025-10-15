// Archivo generado: ejercicio_010.cpp
// Ejercicio: Ordenar ascendente (burbuja)
#include <iostream>
#include <vector>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<n;i++) for(int j=0;j<n-1;j++) if(a[j]>a[j+1]) swap(a[j],a[j+1]); for(int x:a) cout<<x<<" "; cout<<"\n"; return 0; }
