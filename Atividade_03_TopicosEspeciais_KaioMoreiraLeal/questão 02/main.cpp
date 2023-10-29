/*Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Área = (Base * Altura)/2 . Utilize as variáveis AREA, BASE e ALTURA.*/
#include <iostream>

using namespace std;

int main()
{
    double area, base, altura;
    
    cout<<"Calculo de área de um triângulo: \n digite a medida da base em metros:"<<endl;
    cin>>base;
    
    cout<<"digite a medida da altura em metros:"<<endl;
    cin>>altura;
    
    area = (base*altura)/2;
    
    cout<<"O valor da área dessa circunferencia é: "<< area << "m²" <<endl;

    return 0;
}