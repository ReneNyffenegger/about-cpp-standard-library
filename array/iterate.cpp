// 
// g++ -std=c++11 iterate.cpp
//
#include <array>
#include <iostream>

int main() {

  std::array<int, 6> a = {1, 1, 2, 3, 5, 8};

  for (int i : a) {
    std::cout << i << std::endl;
  }

}
