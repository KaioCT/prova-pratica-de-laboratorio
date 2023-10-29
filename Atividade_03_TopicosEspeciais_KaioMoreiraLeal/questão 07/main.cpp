/*
7) Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME 
= 3,14159 * RAIO² * ALTURA.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float raio, altura, volume;

    cout << "Digite o raio da lata de óleo: ";
    cin >> raio;

    cout << "Digite a altura da lata de óleo: ";
    cin >> altura;

    volume = 3.14159 * pow(raio, 2) * altura;

    cout << "O volume da lata de óleo é: " << volume << endl;

    return 0;
}
