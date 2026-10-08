//Тут написана стратегия на стандартном пример с кофе
//разные стратегии это разные добавки

#include <iostream>
#include <vector>
#include <string>
#include <functional>
using namespace std;

struct  examen {
  string name = "Uchenik";
  int grade = 0;
};

void teor_question(examen& c) {
  c.name += " + teor_question";
  c.grade += 2;
}

void perviy_cheps(examen& c) {
  c.name += " + perviy_dop_vopros";
  c.grade += 1;
}

void seminar_bals(examen& c) {
  c.name += " + seminar_baly";
  c.grade += +1;
}

void begin_exam(vector<function<void(examen&)>> v) {
  examen my_c;

  for (auto& add : v) {
    add(my_c);
  }

  cout << my_c.name << ' ' << my_c.grade << endl;
}

int main() {
  begin_exam({});
  begin_exam({teor_question});
  begin_exam({teor_question, seminar_bals});
}
