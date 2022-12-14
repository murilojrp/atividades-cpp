// Crie uma classe para representar um jogador de futebol, com os atributos nome, posição, data
// de nascimento, nacionalidade, altura e peso. Crie os métodos públicos necessários para sets
// e gets e também um método para imprimir todos os dados do jogador. Crie um método para
// calcular a idade do jogador e outro método para mostrar quanto tempo falta para o jogador se
// aposentar. Para isso, considere que os jogadores da posição de defesa se aposentam em
// média aos 40 anos, os jogadores de meio-campo aos 38 e os atacantes aos 35.

#include <iostream>
#include <string>

using namespace std;

class JogadorFutebol {
private:
  string nome;
  string posicao;
  string dataNascimento;
  string nacionalidade;
  int idade;
  float altura;
  float peso;
  int tempoRestante;
public:
    void definindoJogador(string nome, string posicao, string dataNascimento, string nacionalidade, float altura, float peso) {
      setNome(nome);
      setPosicao(posicao);
      setDataNascimento(dataNascimento);
      setNacionalidade(nacionalidade);
      setAltura(altura);
      setPeso(peso);
    }
    string getNome() {
      return nome;
    }
    void setNome(string nome) {
      this->nome = nome;
    }
    string getPosicao() {
      return posicao;
    }
    void setPosicao(string posicao) {
      this->posicao = posicao;
    }
    string getDataNascimento() {
      return dataNascimento;
    }
    void setDataNascimento(string dataNascimento) {
      this->dataNascimento = dataNascimento;
    }
    string getNacionalidade() {
      return nacionalidade;
    }
    void setNacionalidade(string nacionalidade) {
      this->nacionalidade = nacionalidade;
    }
    float getAltura() {
      return altura;
    }
    void setAltura(float altura) {
      this->altura = altura;
    }
    float getPeso() {
      return peso;
    }
    void setPeso(float peso) {
      this->peso = peso;
    }
    float getTempoRestante() {
      return tempoRestante;
    }
    void setTempoRestante(float tempoRestante) {
      this->tempoRestante = tempoRestante;
    }
    int getIdade() {
      return idade;
    }
    void setIdade(int idade) {
      this->idade = idade;
    }
    void imprimirDados() {
      calcularIdade();
      calcularAposentadoria();
      cout << "Nome: " << nome << endl;
      cout << "Posicao: " << posicao << endl;
      cout << "Data de nascimento: " << dataNascimento << endl;
      cout << "Idade: " << idade << endl;
      cout << "Nacionalidade: " << nacionalidade << endl;
      cout << "Altura: " << altura << endl;
      cout << "Peso: " << peso << endl;
    }
    void calcularIdade() {
      int ano = stoi(dataNascimento.substr(6, 4));
      this->idade = 2022 - ano;
    }
    void calcularAposentadoria() {
      calcularIdade();
      int idade = getIdade();
      if (posicao == "defesa") {
        tempoRestante = 40 - idade;
      } else if (posicao == "meio-campo") {
        tempoRestante = 38 - idade;
      } else if (posicao == "atacante") {
        tempoRestante = 35 - idade;
      }
      if (tempoRestante <= 0) {
        int tempo = tempoRestante * -1;
        cout << "\nJogador já aposentado à " << tempo << " anos\n";
      }
    }
};

int main() {
  JogadorFutebol jogador1;
  jogador1.definindoJogador("Neymar", "atacante", "05/02/1992", "Brasileiro", 1.75, 68.5);
  jogador1.imprimirDados();
  jogador1.definindoJogador("Ronaldo", "atacante", "22/09/1976", "Brasileiro", 1.87, 80.5);
  jogador1.imprimirDados();
  return 0;
}