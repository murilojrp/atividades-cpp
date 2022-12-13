// Considere uma classe chamada ContaBancaria que possui os atributos número, agência,
// saldo, código do tipo e nome do tipo. Crie uma classe ContaImposto que herda de conta e
// possui um atributo percentualImposto. Esta classe também deve possuir um método
// calcularImposto() que subtrai do saldo, o valor do próprio saldo multiplicado pelo percentual do
// imposto. Crie um programa para criar as instâncias de ContaImposto e utilizar todos os
// métodos das 3 classes (ex.: sacar, depositar, calcularImposto).

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
    private:
        int numero;
        int agencia;
        float saldo;
        int codigoTipo;
        string nomeTipo;
    public:
        ContaBancaria(int numero, int agencia, float saldo, int codigoTipo, string nomeTipo) {
            this->numero = numero;
            this->agencia = agencia;
            this->saldo = saldo;
            this->codigoTipo = codigoTipo;
            this->nomeTipo = nomeTipo;
        }
        void sacar(float valor) {
            if (valor > saldo) {
                cout << "Saldo insuficiente" << endl;
            } else {
                saldo -= valor;
            }
        }
        void depositar(float valor) {
            saldo += valor;
        }
        void imprimir() {
            cout << "Numero: " << numero << endl;
            cout << "Agencia: " << agencia << endl;
            cout << "Saldo: " << saldo << endl;
            cout << "Codigo do tipo: " << codigoTipo << endl;
            cout << "Nome do tipo: " << nomeTipo << endl;
        }
};

class ContaImposto : public ContaBancaria {
    private:
        float percentualImposto;
    public:
        ContaImposto(int numero, int agencia, float saldo, int codigoTipo, string nomeTipo, float percentualImposto) : ContaBancaria(numero, agencia, saldo, codigoTipo, nomeTipo) {
            this->percentualImposto = percentualImposto;
        }
        void calcularImposto() {
            saldo -= saldo * percentualImposto;
        }
};

int main() {
    ContaImposto conta(1, 1, 1000, 1, "Conta Corrente", 0.1);
    conta.imprimir();
    conta.calcularImposto();
    conta.imprimir();
    conta.sacar(100);
    conta.imprimir();
    conta.depositar(100);
    conta.imprimir();
    return 0;
}

