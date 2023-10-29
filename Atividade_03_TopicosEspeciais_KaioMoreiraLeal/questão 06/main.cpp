/*
6) Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente convertida em graus Celsius. A fórmula 
de conversão é C = (F – 32) * ( 5 / 9), na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/
#include <iostream>
using namespace std;

int main() {
    float F, C;

    cout << "Digite a temperatura em graus Fahrenheit: ";
    cin >> F;

    C = (F - 32) * (5.0 / 9.0);

    cout << "A temperatura em graus Celsius: " << C << endl;

    return 0;
}
