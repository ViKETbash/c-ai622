//Тут написана стратегия на стандартном пример с кофе
//разные стратегии это разные добавки

#include <iostream>
#include <vector>
#include <string>
#include <functional>
using namespace std;

struct  Coffee {
  string name = "oleg_coffee";
  int price = 100;
};

void milk(Coffee& c) {
  c.name += " + moloko";
  c.price += 30;
}

void sugar(Coffee& c) {
  c.name += " + sahar";
  c.price += 12;
}

void spushenka(Coffee& c) {
  c.name += " + spushenka";
  c.price += 2000;
}

void make_coffee(vector<function<void(Coffee&)>> v) {
  Coffee my_c;

  for (auto& add : v) {
    add(my_c);
  }

  cout << my_c.name << ' ' << my_c.price << endl;
}

int main() {
  make_coffee({});
  make_coffee({spushenka});
  make_coffee({spushenka, milk});
}