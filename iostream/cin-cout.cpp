#include <iostream>
#include <string>

int main () {

  int         times;
  std::string what;

  std::cout << "How many times: ";
  std::cin  >> times;
  std::cout << "which string: ";
  std::cin  >> what;

  for (int i=0; i<times; i++)
    std::cout << i << ": " << what << std::endl;

}
