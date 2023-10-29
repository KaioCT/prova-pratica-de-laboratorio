/*
9) Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a 
variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente 
os valores trocados.
*/
#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Digite o valor para a variável A: ";
    cin >> A;

    cout << "Digite o valor para a variável B: ";
    cin >> B;

    C = A;
    A = B;
    B = C;

    cout << "\nApós a troca dos valores:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
