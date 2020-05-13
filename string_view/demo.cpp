#include <string>
#include <string_view>
#include <iostream>


template<typename STR> void f(STR str) {

    STR         sub      = str.substr(4, 3);

    const char* addr_str = str.data();
    const char* addr_sub = sub.data();

    std::cout << "Difference between addresses: " << (addr_str - addr_sub) << std::endl;
}

int main() {

    std::string      digits  ("0123456789");

    f<const std::string     &>(digits);
    f<const std::string_view&>(digits);

}
