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
  function<int(int, int)> solution;
  good_delenie(function<int(int, int)> cur) {
    solution = cur;
  }
  int operator()(int a, int b) {
    if (a == 0) {
      return -4071505;
    }
    return solution(a, b);
  }
};

int main() {
  int a, b;
  cin >> a >> b;
  good_delenie func(delenie);
  cout << func(a, b) << '\n';
}
