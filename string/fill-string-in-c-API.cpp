//
//   cl /nologo /EHsc fill-string-in-c-API.cpp
//   g++              fill-string-in-c-API.cpp

#include <iostream>
#include <cstring>

void getString(char* buf) {
   std::strcpy(buf, "Hello World");
}


int main() {
//
// Allocate buffer (100 bytes) for string.
// Initialize buffer with the null byte.
//
   std::string str(100, '\x00');

//
// Assign string to our std::string:
//
   getString(&str[0]);

//
// Verify result of operation
//
   std::cout << str << std::endl;
}
