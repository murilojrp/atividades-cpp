// Uma biblioteca possui em seu acervo livros e periódicos. Cada livro tem título e
// situação; cada periódico tem título e número do volume. Os periódicos não podem sair da
// biblioteca, mas os livros sim. Durante o empréstimo, a situação de um livro é emprestado,
// quando ele é devolvido, retorna à situação de disponível. Crie as classes necessárias para
// representar esta Biblioteca.

#include <iostream>

using namespace std;

class Biblioteca {
    private:
        string titulo;
        string situacao;
    public:
        Biblioteca(string titulo, string situacao) {
            this->titulo = titulo;
            this->situacao = situacao;
        }
        string getTitulo() {
            return titulo;
        }
        string getSituacao() {
            return situacao;
        }
        void setSituacao(string situacao) {
            this->situacao = situacao;
        }
};

class Periodico : public Biblioteca {
    private:
        int volume;
    public:
        Periodico(string titulo, string situacao, int volume) : Biblioteca(titulo, situacao) {
            this->volume = volume;
        }
        int getVolume() {
            return volume;
        }
};

class Livro : public Biblioteca {
    public:
        Livro(string titulo, string situacao) : Biblioteca(titulo, situacao) {}
};

int main() {
    Livro livro("Livro 1", "Disponível");
    Periodico periodico("Periódico 1", "Disponível", 1);
    cout << "Título Livro: " << livro.getTitulo() << endl;
    cout << "Situação Livro: " << livro.getSituacao() << endl;
    cout << "\n";
    cout << "Título Periódico: " << periodico.getTitulo() << endl;
    cout << "Situação Periódico: " << periodico.getSituacao() << endl;
    cout << "Volume Periódico: " << periodico.getVolume() << endl;
    cout << "\n";
    livro.setSituacao("Emprestado");
    cout << "Situação Livro: " << livro.getSituacao() << endl;
    return 0;
}

