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
            return valor + valorAdicional;
        }
};

class VIP : public IngressoVIP {
    private:
        float valorAdicional;
    public:
        VIP(float valor, float valorAdicional) : IngressoVIP(valor, valorAdicional) {
            this->valorAdicional = valorAdicional;
        }
        float getValor() {
            return valor + valorAdicional;
        }
};

class Normal : public Ingresso {
    public:
        Normal(float valor) : Ingresso(valor) {}
        void imprimirValor() {
            cout << "Ingresso Normal" << endl;
        }
};

class CamaroteInferior : public VIP {
    private:
        string localizacao;
    public:
        CamaroteInferior(float valor, float valorAdicional, string localizacao) : VIP(valor, valorAdicional) {
            this->localizacao = localizacao;
        }
        void imprimirLocalizacao() {
            cout << "Localizacao: " << localizacao << endl;
        }
};

class CamaroteSuperior : public VIP {
    private:
        float valorAdicional;
    public:
        CamaroteSuperior(float valor, float valorAdicional) : VIP(valor, valorAdicional) {
            this->valorAdicional = valorAdicional;
        }
        float getValor() {
            return valor + valorAdicional;
        }
};

int main() {
    Ingresso ingresso(100);
    IngressoVIP ingressoVIP(100, 50);
    ingresso.imprimirValor();
    cout << "
Valor VIP: " << ingressoVIP.getValor() << endl;
    Normal normal(100);
    normal.imprimirValor();
    CamaroteInferior camaroteInferior(100, 50, "Camarote Inferior");
    camaroteInferior.imprimirValor();
    camaroteInferior.imprimirLocalizacao();
    CamaroteSuperior camaroteSuperior(100, 50);
    cout << "Valor Camarote Superior: " << camaroteSuperior.getValor() << endl;
    return 0;
}
