// 2. A fim de representar empregados em uma empresa, crie uma classe chamada Empregado
// que inclui as três informações a seguir como atributos:
// a. um primeiro nome,
// b. um sobrenome, e
// c. um salário mensal.
// Sua classe deve ter um construtor que inicializa os três atributos. Forneça os métodos método
// get/set para cada atributo. Se o salário mensal não for positivo, configure-o como 0.0. Escreva
// um aplicativo de teste que demonstra as capacidades da classe. Crie duas instâncias da
// classe e exiba o salário anual de cada instância (soma dos salários mensais). Então dê a cada
// empregado um aumento de 10% e exiba novamente o salário anual de cada empregado.

#include <iostream>
#include <string>
using namespace std;

class Empregado {
private:
  string primeiroNome;
  string sobrenome;
  float salarioMensal;
public:
  string getPrimeiroNome() {
    return primeiroNome;
  }
  void setPrimeiroNome(string primeiroNome) {
    this->primeiroNome = primeiroNome;
  }
  string getSobrenome() {
    return sobrenome;
  }
  void setSobrenome(string sobrenome) {
    this->sobrenome = sobrenome;
  }
  float getSalarioMensal() {
    return salarioMensal;
  }
  void setSalarioMensal(float salarioMensal) {
    this->salarioMensal = salarioMensal;
  }
  float getSalarioAnual() {
    return salarioMensal * 12;
  }
  void aumentarSalario(float percentual) {
    salarioMensal += salarioMensal * percentual;
  }
};

int main() {
  Empregado emp;
  string primeiroNome, sobrenome;
  float salarioMensal;

  cout << "Digite o primeiro nome do empregado: ";
  cin >> primeiroNome;
  emp.setPrimeiroNome(primeiroNome);

  cout << "Digite o sobrenome do empregado: ";
  cin >> sobrenome;
  emp.setSobrenome(sobrenome);

  cout << "Digite o salário mensal do empregado: ";
  cin >> salarioMensal;
  emp.setSalarioMensal(salarioMensal);

  cout << "Salário mensal de " << emp.getPrimeiroNome() << " " << emp.getSobrenome() << " sem o aumento de 10%: " << emp.getSalarioMensal() << endl;
  cout << "Salário anual de " << emp.getPrimeiroNome() << " " << emp.getSobrenome() << " sem aumento de 10%: " << emp.getSalarioAnual() << endl;

  emp.aumentarSalario(0.1);

  cout << "Salário mensal de " << emp.getPrimeiroNome() << " " << emp.getSobrenome() << " com o aumento de 10%: " << emp.getSalarioMensal() << endl;
  cout << "Salário anual de " << emp.getPrimeiroNome() << " " << emp.getSobrenome() << " com o aumento de 10%: " << emp.getSalarioAnual() << endl;

  return 0;
}