// Archivo generado: ejercicio_007.cpp
// Ejercicio: Invertir una cadena
#include <iostream>
#include <string>
using namespace std;
int main(){ string s; getline(cin, s); if(s.size()==0){ cout<<"Ingrese una linea:\n"; getline(cin,s);} string r(s.rbegin(), s.rend()); cout<<r<<"\n"; return 0; }
