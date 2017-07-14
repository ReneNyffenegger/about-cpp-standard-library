#include <fstream>

int main() {

  std::ofstream file;
  file.open("/tmp/fstream.txt");
  file << __FILE__ << std::endl;
  file.close();
}
