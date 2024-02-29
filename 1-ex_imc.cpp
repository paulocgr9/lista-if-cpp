#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main()
{
    /* Os valores de massa e altura são inseridos nas seguintes variáveis */
    float fMassa = 55.5;
    float fAltura = 1.78;

    float iIMC = fMassa / std::pow(fAltura, 2);

    cout << "O IMC calculado é de: " << iIMC << endl;
    
    if (iIMC < 17)
    {
        cout << "Classificação: Muito abaixo do peso" << endl;
    }
    if (iIMC < 18.5 && iIMC >= 17)
    {
        cout << "Classificação: Abaixo do peso" << endl;
    }
    if (iIMC < 25 && iIMC >= 18.5)
    {
        cout << "Classificação: Peso normal" << endl;
    }
    if (iIMC < 30 && iIMC >= 25)
    {
        cout << "Classificação: Acima do peso" << endl;
    }
    if (iIMC < 35 && iIMC >= 30)
    {
        cout << "Classificação: Obesidade" << endl;
    }
    if (iIMC < 40 && iIMC >= 35)
    {
        cout << "Classificação: Obesidade severa" << endl;
    }
    if (iIMC >= 40)
    {
        cout << "Classificação: Obesidade mórbida" << endl;
    }
    
    return 0;
}