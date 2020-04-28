#include <string>
#include <iostream>

void printLength(const std::string& s) {
     std::cout << "length of " << s << ": " << s.length() << std::endl;
}

int main() {

    std::string foo         ("foo"                );
    std::string name        ("René"               );
    std::string containsZero("abc" "\x00" "def", 7);


    printLength(foo         );
    printLength(name        ); // 5, because source file is UTF-8 encoded
    printLength(containsZero); // 7, the zero byte is not special in std::string

 // std::cout << containsZero.c_str() << std::endl;
}
