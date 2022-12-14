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
    int getNumero() {
        return numero;
    }
    void setNumero(int numero) {
        this->numero = numero;
    }
    int getAgencia() {
        return agencia;
    }
    void setAgencia(int agencia) {
        this->agencia = agencia;
    }
    float getSaldo() {
        return saldo;
    }
    void setSaldo(float saldo) {
        this->saldo = saldo;
    }
    int getCodigoTipo() {
        return codigoTipo;
    }
    void setCodigoTipo(int codigoTipo) {
        this->codigoTipo = codigoTipo;
    }
    string getNomeTipo() {
        return nomeTipo;
    }
    void setNomeTipo(string nomeTipo) {
        this->nomeTipo = nomeTipo;
    }
    void sacar(float valor) {
        saldo -= valor;
    }
    void depositar(float valor) {
        saldo += valor;
    }
};

class ContaImposto : public ContaBancaria {
private:
    float percentualImposto;
public:
    float getPercentualImposto() {
        return percentualImposto;
    }
    void setPercentualImposto(float percentualImposto) {
        this->percentualImposto = percentualImposto;
    }
    void calcularImposto() {
        float saldo = getSaldo(); 
        saldo -= saldo * percentualImposto; 
        setSaldo(saldo); 
    }
};

int main() {
    ContaImposto conta;
    int numero, agencia, codigoTipo;
    float saldo, percentualImposto;
    string nomeTipo;

    cout << "Digite o número da conta: ";
    cin >> numero;
    conta.setNumero(numero);

    cout << "Digite o número da agência: ";
    cin >> agencia;
    conta.setAgencia(agencia);


    cout << "Digite o código do tipo da conta: ";
    cin >> codigoTipo;
    conta.setCodigoTipo(codigoTipo);

    cout << "Digite o nome do tipo da conta: ";
    cin >> nomeTipo;
    conta.setNomeTipo(nomeTipo);

    cout << "Você possui R$1000,00 em sua conta. O que deseja realizar?" << endl;
    conta.setSaldo(1000);

    cout << "1 - Sacar" << endl;
    cout << "2 - Depositar" << endl;
    cout << "3 - Calcular imposto" << endl;
    cout << "4 - Sair" << endl;
    int opcao;
    cin >> opcao;

    while (opcao != 4) {
        switch (opcao) {
            case 1:
                float valorSaque;
                cout << "Digite o valor do saque: ";
                cin >> valorSaque;
                conta.sacar(valorSaque);
                break;
            case 2:
                float valorDeposito;
                cout << "Digite o valor do depósito: ";
                cin >> valorDeposito;
                conta.depositar(valorDeposito);
                break;
            case 3:
                cout << "Digite o percentual do imposto: ";
                cin >> percentualImposto;
                conta.setPercentualImposto(percentualImposto);
                conta.calcularImposto();
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
        cout << "Você possui R$" << conta.getSaldo() << " em sua conta. O que deseja realizar?" << endl;
        cout << "1 - Sacar" << endl;
        cout << "2 - Depositar" << endl;
        cout << "3 - Calcular imposto" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;
    }

    return 0;
}
