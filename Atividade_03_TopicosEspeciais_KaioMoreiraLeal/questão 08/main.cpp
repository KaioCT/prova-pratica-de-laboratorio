/*
8) Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um 
automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a 
velocidade média durante ela. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA 
= TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros de combustível 
utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores 
da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.
*/
#include <iostream>
using namespace std;

int main() {
    float tempo, velocidade, distancia, litros_usados;

    cout << "Digite o tempo gasto na viagem (em horas): ";
    cin >> tempo;

    cout << "Digite a velocidade média durante a viagem (em km/h): ";
    cin >> velocidade;

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    cout << "\nVelocidade média: " << velocidade << " km/h" << endl;
    cout << "Tempo gasto na viagem: " << tempo << " horas" << endl;
    cout << "Distância percorrida: " << distancia << " km" << endl;
    cout << "Quantidade de litros utilizada na viagem: " << litros_usados << " litros" << endl;

    return 0;
}
