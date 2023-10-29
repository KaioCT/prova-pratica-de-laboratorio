/*
5) Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em 
Celsius;
*/

#include <iostream>
using namespace std;

int main() {
    float C, F;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> C;

    F = (9 * C + 160) / 5;

    cout << "A temperatura em graus Fahrenheit : " << F << endl;

    return 0;
}

