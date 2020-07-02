#include <cstdlib>
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <type_traits>
#include <vector>
#include <map>
#include <map>
#include "ContiguousMap.h"

void pvec(auto&& vec)
{
  for(auto el : vec)
  {
    std::cout << el << " ";
  }
  std::cout << "\n";
}

int main()
{
  ContiguousMap<int, int> mp = {{1, 1}, {1, 2}};
  mp.insert({1, 1});
  for(auto el : mp)
  {
    std::cout << el.first << " ";
  }
}
