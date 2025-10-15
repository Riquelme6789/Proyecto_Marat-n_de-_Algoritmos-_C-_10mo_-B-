// Archivo generado: ejercicio_008.cpp
// Ejercicio: Contar palabras en una linea
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){ string line; getline(cin,line); if(line.empty()){ cout<<"Ingrese una linea:\n"; getline(cin,line);} stringstream ss(line); string w; int count=0; while(ss>>w) count++; cout<<"Palabras = "<<count<<"\n"; return 0; }
