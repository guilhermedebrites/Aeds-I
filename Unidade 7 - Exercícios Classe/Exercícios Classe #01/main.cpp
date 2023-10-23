#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
  string nome;
  int idade;
  float altura;

public:
  Pessoa() {}
  Pessoa(string n, int i, float a) : nome(n), idade(i), altura(a) {}

  string getNome() { return nome; }
  void setNome(string nome) { this->nome = nome; }

  int getIdade() { return idade; }
  void setIdad(int idade) { this->idade = idade; }

  float getAltura() { return altura; }
  void setAltura(float altura) { this->altura = altura; }

  void imprimir() {
    cout << "== Pessoa: " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
  }
};

int main() {
  Pessoa pessoa1("Gabriel Glatz", 18, 1.68);
  Pessoa pessoa2("Pedro Tourino", 2, 1.50);
  pessoa1.imprimir();
  pessoa2.imprimir();
  return 0;
}
