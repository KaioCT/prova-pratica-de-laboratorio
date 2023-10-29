/*
10) Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int valor;

    cout << "Digite um valor inteiro: ";
    cin >> valor;

    cout << "\nO quadrado do valor é: " << pow(valor, 2) << endl;
    cout << "O cubo do valor é: " << pow(valor, 3) << endl;

    return 0;
}
