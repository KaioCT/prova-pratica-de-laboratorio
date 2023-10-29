/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*1) Faça um algoritmo para calcular a área de uma circunferência, considerando a fórmula: ÁREA = π * RAIO². 
Utilize as variáveis AREA e RAIO e a constante π (pi = 3,14159)*/


#include <iostream>

using namespace std;

int main()
{
    double area, raio, pi = 3.14159;
    
    cout<<"Calculo de área de um circulo: \n digite a medida do raio em metros:"<<endl;
    cin>>raio;
    
    area = pi * (raio*raio);
    
    cout<<"O valor da área dessa circunferencia é: "<< area << "m²" <<endl;

    return 0;
}