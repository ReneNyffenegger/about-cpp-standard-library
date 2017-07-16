//
//  g++ -std=c++11 iterate-over-anonymous-array.cpp
//
#include <initializer_list>
#include <iostream>

int main() {

  for (auto fib: {1, 1, 2, 3, 5, 8, 13, 21, 34}) {
    std::cout << fib << std::endl;
  }

}
