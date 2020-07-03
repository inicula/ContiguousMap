#include <cstdlib>
#include <functional>
#include <initializer_list>
#include <tuple>
#include <iostream>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <type_traits>
#include <vector>
#include <map>
#include <map>
#include "ContiguousMap.h"

template<typename T>
void pvec(T&& vec)
{
  for(auto el : vec)
  {
    std::cout << el << " ";
  }
  std::cout << "\n";
}

auto ret_pairs(int n)
{
  std::vector<std::pair<int, int>> res;
  res.reserve(n);
  for(int i = 0; i < n; ++i)
  {
    res.push_back({i, i});
  }
  return res;
}

int main()
{
  auto pairs = ret_pairs(10);
  ContiguousMap<int, int> my_map(pairs.cbegin(), pairs.cend());
  my_map.erase(my_map.begin());
  std::cout << my_map.erase(5) << std::endl;
  std::cout << my_map.contains(5) << std::endl;
  std::cout << my_map.contains(7) << std::endl;
  for(auto el : my_map)
  {
    std::cout << el.first << " " << el.second << std::endl;
  }
}
