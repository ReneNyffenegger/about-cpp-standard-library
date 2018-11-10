//
//   g++ -std=c++11 to_string.cpp
//
#include <string>
#include <iostream>

int main() {

  std::string res;

  bool   b = true        ; res = std::to_string(b); std::cout << res << std::endl; // 1
  float  f = 123.45678901; res = std::to_string(f); std::cout << res << std::endl; // 123.456787
  double d = 123.45678901; res = std::to_string(d); std::cout << res << std::endl; // 123.456789
  long   l = 123456789012; res = std::to_string(l); std::cout << res << std::endl; // 123456789012

}
