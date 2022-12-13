// Construa um programa com entrada e saída de dados para representar três tipos de produtos,
// os quais são vendidos em três níveis: Estadual, Nacional e Importado. Cada nível possui um
// tipo diferente de tributação e taxas, as quais deverão ser levadas em conta para calcular o
// valor final do produto que será exibido no relatório. Os atributos de cada nível de produto são:
// a. Estadual: descricao, valor, imposto;
// b. Nacional: descricao, valor, imposto, taxa;
// c. Importado: descricao, valor, imposto, taxa, taxaImportacao;
// O imposto do produto estadual é de 10%. O imposto do produto nacional é de 10% e taxa de
// 5%. O imposto do produto importado é de 10%, taxa de 5% e taxa de importação de 5%. Faça
// um método relatório para cada classe, o qual informa o conteúdo dos atributos e o valor do
// produto.

#include <iostream>

using namespace std;

class Produto {
    private:
        string descricao;
        float valor;
        float imposto;
    public:
        Produto(string descricao, float valor, float imposto) {
            this->descricao = descricao;
            this->valor = valor;
            this->imposto = imposto;
        }
        string getDescricao() {
            return descricao;
        }
        void setDescricao(string descricao) {
            this->descricao = descricao;
        }
        float getValor() {
            return valor;
        }
        void setValor(float valor) {
            this->valor = valor;
        }
        float getImposto() {
            return imposto;
        }
        void setImposto(float imposto) {
            this->imposto = imposto;
        }
        virtual void relatorio() {
            cout << "Descrição: " << descricao << endl;
            cout << "Valor: " << valor << endl;
            cout << "Imposto: " << imposto << endl;
        }
};

class ProdutoEstadual : public Produto {
    public:
        ProdutoEstadual(string descricao, float valor, float imposto) : Produto(descricao, valor, imposto) {}
        void relatorio() {
            cout << "Produto Estadual" << endl;
            Produto::relatorio();
        }
};

class ProdutoNacional : public Produto {
    private:
        float taxa;
    public:
        ProdutoNacional(string descricao, float valor, float imposto, float taxa) : Produto(descricao, valor, imposto) {
            this->taxa = taxa;
        }
        void relatorio() {
            cout << "Produto Nacional" << endl;
            Produto::relatorio();
            cout << "Taxa: " << taxa << endl;
        }
};

class ProdutoImportado : public Produto {
    private:
        float taxa;
        float taxaImportacao;
    public:
        ProdutoImportado(string descricao, float valor, float imposto, float taxa, float taxaImportacao) : Produto(descricao, valor, imposto) {
            this->taxa = taxa;
            this->taxaImportacao = taxaImportacao;
        }
        void relatorio() {
            cout << "Produto Importado" << endl;
            Produto::relatorio();
            cout << "Taxa: " << taxa << endl;
            cout << "Taxa de Importação: " << taxaImportacao << endl;
        }
};

int main() {
    ProdutoEstadual produtoEstadual("Produto Estadual", 100, 10);
    ProdutoNacional produtoNacional("Produto Nacional", 100, 10, 5);
    ProdutoImportado produtoImportado("Produto Importado", 100, 10, 5, 5);
    produtoEstadual.relatorio();
    cout << endl;
    produtoNacional.relatorio();
    cout << endl;
    produtoImportado.relatorio();
    return 0;
}

