// Crie uma classe chamada Ingresso, que possui um valor em reais e um método
// imprimirValor(). Crie uma classe IngressoVIP, que herda de Ingresso e possui um valor
// adicional. Crie um método que retorne o valor do ingresso VIP (com o adicional incluído). Crie
// um programa para criar as instâncias de Ingresso e IngressoVIP, mostrando a diferença de
// preços.

#include <iostream>
#include <string>

using namespace std;

class Ingresso {
private:
    float valor;
public:
    float getValor() {
        return valor;
    }
    void setValor(float valor) {
        this->valor = valor;
    }
    void imprimirValor() {
        cout << "Valor do ingresso: " << valor << endl;
    }
};

class IngressoVIP : public Ingresso {
private:
    float valorAdicional;
public:
    float getValorAdicional() {
        return valorAdicional;
    }
    void setValorAdicional(float valorAdicional) {
        this->valorAdicional = valorAdicional;
    }
    float calcularValorVIP() {
        return getValor() + valorAdicional;
    }
};

int main() {
    Ingresso ingresso;
    ingresso.setValor(10);
    ingresso.imprimirValor();
    IngressoVIP ingressoVIP;
    ingressoVIP.setValor(10);
    ingressoVIP.setValorAdicional(5);
    cout << "Valor do ingresso VIP: " << ingressoVIP.calcularValorVIP() << endl;
    return 0;
}