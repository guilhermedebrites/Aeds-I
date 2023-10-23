#include <iostream>
#include <string>

using namespace std;

class Relogio {
private:
  int horas;
  int minutos;
  int segundos;

public:
  Relogio(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

  string getHorario() {
    return to_string(horas) + ":" + to_string(minutos) + ":" +
           to_string(segundos);
  }

  void setHorario(int horas, int minutos, int segundos) {
    this->horas = horas;
    this->minutos = minutos;
    this->segundos = segundos;
  }

  void avancarSegundo() {
    this->segundos += 1;
    if (this->segundos == 60) {
      this->minutos += 1;
      this->segundos = 0;
    }
    if (this->minutos == 60) {
      this->horas += 1;
      this->minutos = 0;
    }
  }
};

int main() {
  Relogio horario(13, 59, 59);
  cout << horario.getHorario() << endl;
  horario.avancarSegundo();
  cout << horario.getHorario() << endl;
}