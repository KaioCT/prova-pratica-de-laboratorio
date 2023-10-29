/*
4) Faça um algoritmo que: 
a) Obtenha o valor para a variável HT (horas trabalhadas no mês); 
b) Obtenha o valor para a variável VH (valor hora trabalhada): 
c) Obtenha o valor para a variável PD (percentual de desconto); 
d) Calcule o salário bruto => SB = HT * VH; 
e) Calcule o total de desconto => TD = (PD/100)*SB; 
f) Calcule o salário líquido => SL = SB – TD; 
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float HT, VH, PD, SB, TD, SL;

    cout << "Digite as horas trabalhadas no mês: ";
    cin >> HT;

    cout << "Digite o valor da hora trabalhada: ";
    cin >> VH;

    cout << "Digite o percentual de desconto: ";
    cin >> PD;

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    cout << "\nHoras trabalhadas: " << HT << endl;
    cout << "Salário Bruto: " << fixed << setprecision(2) << SB << endl;
    cout << "Desconto: " << TD << endl;
    cout << "Salário Líquido: " << SL << endl;

    return 0;
}
