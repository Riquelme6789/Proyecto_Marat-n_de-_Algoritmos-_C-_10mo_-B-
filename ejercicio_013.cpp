// Archivo generado: ejercicio_013.cpp
// Ejercicio: Verificar palindromo
#include <iostream>
#include <string>
using namespace std;
int main(){ string s; getline(cin,s); if(s.empty()) getline(cin,s); string t; for(char c: s) if(isalnum((unsigned char)c)) t+=tolower(c); string r(t.rbegin(), t.rend()); cout<<(t==r?"Es palindromo\n":"No es palindromo\n"); return 0; }
