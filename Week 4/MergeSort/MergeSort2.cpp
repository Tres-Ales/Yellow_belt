template <typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end) {
  // 1. Если диапазон содержит меньше 2 элементов, выход из функции
  int range_length = range_end - range_begin;
  if (range_length < 2) {
    return;
  }
  
  // 2. Создаетс] вектор, содержащий все элементы текущего диапазона
  vector<typename RandomIt::value_type> elements(range_begin, range_end);
  
  // 3. Разбивается на три равные части
  auto one = elements.begin() + range_length / 3;
  auto two = elements.begin() + range_length * 2 / 3;
  
  // 4. Вызывается функция MergeSort от каждой трети вектора
  MergeSort(elements.begin(), one_third);
  MergeSort(one, two_third);
  MergeSort(two, elements.end());
  
  // 5. С помощью алгоритма merge cливаем первые две трети во временный вектор
  
  vector<typename RandomIt::value_type> temp;
  merge(elements.begin(), one, one, two,
        back_inserter(temp));
  
  // 6. С помощью алгоритма merge сливаем отсортированные части
    
  merge(temp.begin(), temp.end(), two, elements.end(),
        range_begin);
}

