#include <iostream>
using namespace std;

class Calculadora {
    public:
        float resultado;
};

int main(){
    float a, b;
    int opcao;
    Calculadora adicao;
    Calculadora substraçao;
    Calculadora divisao;
    Calculadora mutiplicacao;

    cout << "Escolhe uma opcao: ";
    cin >> opcao;
    cout << "Escolhe um numero: ";
    cin >> a;
    cout << "Escolhe outro numero: ";
    cin >> b;
    
    switch (opcao){
        case 1:
        adicao.resultado = a + b;
        cout << adicao.resultado;
        break;
        
        case 2:
        adicao.resultado = a - b;
        cout << adicao.resultado;
        break;
        
        case 3:
        adicao.resultado = a / b;
        cout << adicao.resultado;
        break;
        
        case 4:
        adicao.resultado = a * b;
        cout << adicao.resultado;
        break;
        
        default:
        cout <<"Escolha invalida";
    }
    return 0;
    
}