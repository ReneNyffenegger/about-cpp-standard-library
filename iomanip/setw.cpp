//
// g++ setw.cpp
//
#include <iostream>
#include <iomanip>

void printLine(std::string const& txt, int num) {
   std::cout  <<
   std::left  << std::setw(19) << txt <<
   std::right << std::setw( 4) << num <<
   std::endl;
}

int main() {

   printLine("forty-two"           ,  42);
   printLine("ninty-nine"          ,  99);
   printLine("one hundred and one" , 101);
   printLine("seven"               ,   7);
   printLine("fourteen"            ,  14);
   printLine("fünf"                ,   5);

}
