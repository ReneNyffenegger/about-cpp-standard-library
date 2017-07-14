#include <cstdio>
#include <iostream>

int main() {

  char* tmp_file_name;

  tmp_file_name = tmpnam(nullptr);

  std::cout << "tmp_file_name: " << tmp_file_name << std::endl;

}
