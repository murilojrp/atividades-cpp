// Crie uma classe chamada Ingresso, que possui um valor em reais e um método
// imprimirValor(). Crie uma classe IngressoVIP, que herda de Ingresso e possui um valor
// adicional. Crie um método que retorne o valor do ingresso VIP (com o adicional incluído). Crie
// um programa para criar as instâncias de Ingresso e IngressoVIP, mostrando a diferença de
// preços.

#include <iostream>

using namespace std;

class Ingresso {
    private:
        float valor;
    public:
        Ingresso(float valor) {
            this->valor = valor;
        }
        void imprimirValor() {
            cout << "Valor: " << valor << endl;
        }
};

class IngressoVIP : public Ingresso {
    private:
        float valorAdicional;
    public:
        IngressoVIP(float valor, float valorAdicional) : Ingresso(valor) {
            this->valorAdicional = valorAdicional;
        }
        float getValor() {
            return this->valor + valorAdicional;
        }
};

int main() {
    Ingresso ingresso(100);
    IngressoVIP ingressoVIP(100, 50);
    ingresso.imprimirValor();
    cout << "Valor VIP: " << ingressoVIP.getValor() << endl;
    return 0;
}

