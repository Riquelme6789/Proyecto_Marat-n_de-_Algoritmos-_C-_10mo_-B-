// Archivo generado: ejercicio_002.cpp
// Ejercicio: Promedio de tres notas
#include <iostream>
#include <iomanip>
using namespace std;
int main(){ double n1,n2,n3; cout<<"Ingrese tres notas: "; if(!(cin>>n1>>n2>>n3)) return 0; double prom=(n1+n2+n3)/3.0; cout<<fixed<<setprecision(2)<<"Promedio = "<<prom<<"\n"; cout<<(prom>=7?"Aprueba\n":"Reprueba\n"); return 0; }
