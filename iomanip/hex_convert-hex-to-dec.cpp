#include <iostream>
#include <sstream>
#include <string>

int main() {
   std::stringstream ss;

   std::string value_in_hex("1E240");
   long        value_in_dec;

   ss << std::hex << "1E240";
   ss >> value_in_dec;

   std::cout << "0x" << value_in_hex << " = " << value_in_dec << std::endl;
}
