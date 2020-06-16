#include <map>
#include <stdexcept>

template<typename KeyT, typename ValueT>
ValueT& GetRefStrict(map<KeyT,ValueT>& input_map, KeyT key) {
    if (input_map.count(key) == 0) {
        throw runtime_error("no such key in dictionary");
    }
    return input_map[key];
}
