Напишите шаблонную функцию FindGreaterElements, принимающую множество elements объектов типа T и ещё один объект border типа T и возвращающую вектор из всех элементов множества, бо́льших border, в возрастающем порядке.

template <typename T>
vector<T> FindGreaterElements(const set<T>& elements, const T& border);
