/*
3) Faça um algoritmo que: 
a) Leia o nome; 
b) Leia o sobrenome; 
c) Concatene o nome com o sobrenome; 
d) Apresente o nome completo.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, sobrenome, nome_completo;

    cout << "Digite o seu nome: ";
    getline(cin, nome);

    cout << "Digite o seu sobrenome: ";
    getline(cin, sobrenome);

    nome_completo = nome + " " + sobrenome;

    cout << "O seu nome completo é: " << nome_completo << endl;

    return 0;
}
