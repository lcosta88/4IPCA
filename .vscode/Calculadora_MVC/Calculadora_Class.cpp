#include <iostream>
using namespace std;

class Calculadora {
    public:
        float resultado;
};

int main(){
    float a, b;
    int opcao;
    Calculadora calc;

    cout << "Escolhe uma opcao: ";
    cin >> opcao;
    cout << "Escolhe um numero: ";
    cin >> a;
    cout << "Escolhe outro numero: ";
    cin >> b;
    
    switch (opcao){
        case 1:
        calc.resultado = a + b;
        cout << calc.resultado;
        break;
        
        case 2:
        calc.resultado = a - b;
        cout << calc.resultado;
        break;
        
        case 3:
        calc.resultado = a / b;
        cout << calc.resultado;
        break;
        
        case 4:
        calc.resultado = a * b;
        cout << calc.resultado;
        break;
        
        default:
        cout <<"Escolha invalida";
    }
    return 0;
    
}