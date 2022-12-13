// Implemente uma classe que represente o aluno de uma academia. Os atributos são:
// identificador, nome, idade, peso e altura. Os métodos são:
// a. Um método get e um método set para cada atributo
// b. Um método para exibir os atributos. void exibir( )
// c. Um método para calcular o IMC do aluno, sabendo-se que IMC=peso/altura^2
// d. float calcularIMC( )

#include <iostream>

using namespace std;

class Aluno {
    private:
        int identificador;
        string nome;
        int idade;
        float peso;
        float altura;
    public:
        Aluno(int identificador, string nome, int idade, float peso, float altura) {
            this->identificador = identificador;
            this->nome = nome;
            this->idade = idade;
            this->peso = peso;
            this->altura = altura;
        }
        int getIdentificador() {
            return identificador;
        }
        void setIdentificador(int identificador) {
            this->identificador = identificador;
        }
        string getNome() {
            return nome;
        }
        void setNome(string nome) {
            this->nome = nome;
        }
        int getIdade() {
            return idade;
        }
        void setIdade(int idade) {
            this->idade = idade;
        }
        float getPeso() {
            return peso;
        }
        void setPeso(float peso) {
            this->peso = peso;
        }
        float getAltura() {
            return altura;
        }
        void setAltura(float altura) {
            this->altura = altura;
        }
        void exibir() {
            cout << "Identificador: " << identificador << endl;
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
            cout << "Peso: " << peso << endl;
            cout << "Altura: " << altura << endl;
        }
        float calcularIMC() {
            return peso / (altura * altura);
        }
};

int main() {
    Aluno aluno(1, "Murilo", 18, 80, 1.80);
    aluno.exibir();
    cout << "IMC: " << aluno.calcularIMC() << endl;
    return 0;
}

