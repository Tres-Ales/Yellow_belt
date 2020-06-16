#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(const string& str) {
  // Вектор, в котором будут слова
  vector<string> result;

  // Эти два итератора будут ограничивать текущую не разбитую часть строки
  // str_begin будет двигаться вправо
  auto str_begin = begin(str);
  // str_end всегда будет указывать на конец строки
  const auto str_end = end(str);

  while (true) {
    // Находим первый пробел в текущем «хвосте» строки
    auto it = find(str_begin, str_end, ' ');
    
    // Полуинтервал [str_begin, it) — очередное слово
    result.push_back(string(str_begin, it));
    
    if (it == str_end) {
      // Последнее слово уже добавлено
      break;
    } else {
      // Иначе первый символ после пробела — начало следующего слова.
      str_begin = it + 1;
    }
    
  }

  return result;
}
