#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  //количество дней
  int n;
  cin >> n;
  //вектор из температур
  vector<int> temps(n);
  int64_t sum = 0;
  for (int& temperature : temps) {
    cin >> temperature;
    sum += temperature;
  }

  int aver = sum / n;

  //вектор из температур выше средней
  vector<int> upper_aver;
  for (int i = 0; i < n; ++i) {
    if (temps[i] > aver) {
      upper_aver.push_back(i);
    }
  }

  cout << upper_aver.size() << endl;
  for (int i : upper_aver) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
