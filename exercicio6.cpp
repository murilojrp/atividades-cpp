// Crie uma classe chamada Ingresso, que possui um valor em reais e um método
// imprimirValor(). Crie uma classe IngressoVIP, que herda de Ingresso e possui um valor
// adicional. Crie um método que retorne o valor do ingresso VIP (com o adicional incluído). Crie
// um programa para criar as instâncias de Ingresso e IngressoVIP, mostrando a diferença de
// preços.
// a. crie uma classe VIP, que herda Ingresso e possui um valor adicional. Crie um método
// que retorne o valor do ingresso VIP (com o adicional incluído).
// b. crie uma classe Normal, que herda Ingresso e possui um método que imprime:
// "Ingresso Normal".
// c. crie uma classe CamaroteInferior (que possui a localização do ingresso e métodos
// para acessar e imprimir esta localização) e uma classe CamaroteSuperior, que é mais
// cara (possui valor adicional). Esta última possui um método para retornar o valor do
// ingresso. Ambas as classes herdam a classe VIP

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
        cout << "Valor do ingresso: " << valor << "\n" << endl;
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

class VIP : public IngressoVIP {
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

class Normal : public Ingresso {
public:
    void imprimirValor() {
        cout << "Ingresso Normal: " << getValor() << "\n" << endl;
    }
};

class CamaroteInferior : public VIP {
private:
    string localizacao;
public:
    string getLocalizacao() {
        return localizacao;
    }
    void setLocalizacao(string localizacao) {
        this->localizacao = localizacao;
    }
    void imprimirLocalizacao() {
        cout << "Localizacao: " << localizacao << "\n" << endl;
    }
};

class CamaroteSuperior : public VIP {
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
    cout << "Valor do ingresso VIP: " << ingressoVIP.calcularValorVIP() << "\n" << endl;

    Normal normal;
    normal.setValor(10);
    normal.imprimirValor();

    CamaroteInferior camaroteInferior;
    camaroteInferior.setValor(10);
    camaroteInferior.setValorAdicional(10);
    camaroteInferior.setLocalizacao("Camarote Inferior");
    cout << "Valor do ingresso VIP no camarote inferior: " << camaroteInferior.calcularValorVIP() << endl;
    camaroteInferior.imprimirLocalizacao();

    CamaroteSuperior camaroteSuperior;
    camaroteSuperior.setValor(10);
    camaroteSuperior.setValorAdicional(20);
    cout << "Valor do ingresso VIP no camarote superior: " << camaroteSuperior.calcularValorVIP() << endl;

    return 0;
}
