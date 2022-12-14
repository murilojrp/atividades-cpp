// Crie a classe Imovel, que possui um endereço e um preço.
// a. crie uma classe Novo, que herda Imovel e possui um adicional no preço. Crie
// métodos de acesso e impressão deste valor adicional.
// b. crie uma classe Velho, que herda Imovel e possui um desconto no preço. Crie
// métodos de acesso e impressão para este desconto.

#include <iostream>
#include <string>
using namespace std;

class Imovel {
    private:
        string endereco;
        float preco;
    public:
        Imovel(string endereco, float preco) {
            this->endereco = endereco;
            this->preco = preco;
        }
        string getEndereco() {
            return endereco;
        }
        void setEndereco(string endereco) {
            this->endereco = endereco;
        }
        float getPreco() {
            return preco;
        }
        void setPreco(float preco) {
            this->preco = preco;
        }
};

class Novo : public Imovel {
    private:
        float valorAdicional;
    public:
        Novo(string endereco, float preco, float valorAdicional) : Imovel(endereco, preco) {
            this->valorAdicional = valorAdicional;
            preco = preco + valorAdicional;
            setPreco(preco);
        }
        float getValorAdicional() {
            return valorAdicional;
        }
};

class Velho : public Imovel {
    private:
        float desconto;
    public:
        Velho(string endereco, float preco, float desconto) : Imovel(endereco, preco) {
            this->desconto = desconto;
            preco = preco - desconto;
            setPreco(preco);
        }
        float getDesconto() {
            return desconto;
        }
};

int main() {
    Imovel imovel("Rua 0", 200);
    string endereco;
    float preco;

    cout << "Digite o endereço do imóvel: ";
    cin >> endereco;
    imovel.setEndereco(endereco);

    cout << "Digite o preço do imóvel: ";
    cin >> preco;
    imovel.setPreco(preco);

    cout << "Digite se o imóvel possui mais de 5 anos (s/n): ";
    char opcao;
    cin >> opcao;
    
    if (opcao == 's') {
        float desconto;
        cout << "Digite o desconto: ";
        cin >> desconto;
        Velho velho(imovel.getEndereco(), imovel.getPreco(), desconto);
        cout << "Endereço: " << velho.getEndereco() << " - Preço: " << velho.getPreco() << " - Desconto: " << velho.getDesconto() << endl;
    } else {
        float valorAdicional;
        cout << "Digite o valor adicional: ";
        cin >> valorAdicional;
        Novo novo(imovel.getEndereco(), imovel.getPreco(), valorAdicional);
        cout << "Endereço: " << novo.getEndereco() << " - Preço: " << novo.getPreco() << " - Adicional: " << novo.getValorAdicional() << endl;
    }
    return 0;
}

