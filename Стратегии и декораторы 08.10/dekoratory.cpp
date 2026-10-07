//tut budet klass s deleniem celochislennym!
//prosto suda vse zal'u
//i ksta budet proverka na 0
#include <iostream>
#include <functional>
using namespace std;
int delenie(int a, int b) {
  int c = a / b;
  return c;
}
struct good_delenie {
  function<int(int, int)> sol;
  good_delenie(function<int(int, int)> cur) {
    sol = cur;
  }
  int operator()(int a, int b) {
    if (a == 0) {
      return -1337;
    }
    return sol(a, b);
  }
};

int main() {
  int a, b;
  cin >> a >> b;
  good_delenie func(delenie);
  cout << func(a, b) << '\n';
}