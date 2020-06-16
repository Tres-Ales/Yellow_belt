#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <typename T>
vector<T> FindGreaterElements(const set<T>& elements, const T& border) {
  // Итерация по множеству
  auto it = begin(elements);
  while (it != end(elements) && *it <= border) {
      ++it;
  }
  // Возвращается вектор, созданный из элементов множества, начиная с it
  return {it, end(elements)};
}

