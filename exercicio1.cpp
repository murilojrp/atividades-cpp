// 1. Crie uma classe chamada Fatura que possa ser utilizado por uma loja de suprimentos de
// informática para representar uma fatura de um item vendido na loja. Uma fatura deve incluir as
// seguintes informações como atributos:
// a. o número do item faturado,
// b. a descrição do item,
// c. a quantidade comprada do item e
// d. o preço unitário do item.
// Forneça os métodos get/set para cada variável de instância. Além disso, forneça um método
// chamado calcular_valor_fatura que calcula o valor da fatura (isso é, multiplica a quantidade pelo
// preço por item) e depois retorna o valor. Escreva também um programa de teste (main) que
// demonstra as capacidades da classe Fatura. Escreva um aplicativo de teste que demonstra as
// capacidades da classe

#include <iostream>
#include <string>

using namespace std;

class Fatura {
private:
  int numeroItem;
  string descricaoItem;
  int quantidadeComprada;
  float precoUnitario;
public:
  int getNumeroItem() {
      return numeroItem;
  }
  void setNumeroItem(int numeroItem) {
      this->numeroItem = numeroItem;
  }
  string getDescricaoItem() {
      return descricaoItem;
  }
  void setDescricaoItem(string descricaoItem) {
      this->descricaoItem = descricaoItem;
  }
  int getQuantidadeComprada() {
      return quantidadeComprada;
  }
  void setQuantidadeComprada(int quantidadeComprada) {
      this->quantidadeComprada = quantidadeComprada;
  }
  float getPrecoUnitario() {
      return precoUnitario;
  }
  void setPrecoUnitario(float precoUnitario) {
      this->precoUnitario = precoUnitario;
  }
  float calcularValorFatura() {
      return quantidadeComprada * precoUnitario;
  }
};

int main() {
  Fatura fat;
  int numeroItem, quantidadeComprada;
  string descricaoItem;
  float precoUnitario;

  cout << "Digite o numero do item: ";
  cin >> numeroItem;
  fat.setNumeroItem(numeroItem); 

  cout << "Digite a descricao do item: ";
  cin >> descricaoItem;
  fat.setDescricaoItem(descricaoItem);

  cout << "Digite a quantidade comprada: ";
  cin >> quantidadeComprada;
  fat.setQuantidadeComprada(quantidadeComprada);

  cout << "Digite o preco unitario: ";
  cin >> precoUnitario; 
  fat.setPrecoUnitario(precoUnitario);

  cout << "Numero do item: " << fat.getNumeroItem() << endl;
  cout << "Descricao do item: " << fat.getDescricaoItem() << endl;
  cout << "Quantidade comprada: " << fat.getQuantidadeComprada() << endl;
  cout << "Preco unitario: " << fat.getPrecoUnitario() << endl;
  cout << "Valor da fatura: " << fat.calcularValorFatura() << endl;
  return 0;
}