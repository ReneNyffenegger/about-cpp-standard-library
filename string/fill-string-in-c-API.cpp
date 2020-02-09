//
//   cl /nologo /EHsc fill-string-in-c-API.cpp
//   g++              fill-string-in-c-API.cpp

#include <iostream>
#include <cstring>

void getString(char* buf) {
   std::strcpy(buf, "Hello World");
}


int main() {
   std::string str(100, 0);
   getString(&str[0]);

   std::cout << str << std::endl;
}
