#include <sstream>
#include <iostream>
#include <string>

int main() {

  std::ostringstream oss;

  oss << "Hello, world" << std::endl;
  oss << "42" << std::endl;

  std::string str = oss.str();

  std::cout << str;

}
