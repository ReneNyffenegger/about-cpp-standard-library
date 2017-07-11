//
//  g++ -std=c++11 read-write-in-threads.cpp -l pthread
//
#include <atomic>
#include <thread>
#include <iostream>

            unsigned long long  ull  ;
std::atomic<unsigned long long> ull_a;

void T() {

  for (int i=0; i<1000000; i++) {
    ull  ++;
    ull_a++;
  }

}

int main () {

  ull   = 0;
  ull_a = 0;

  std::thread t1(T);
  std::thread t2(T);
  std::thread t3(T);
  std::thread t4(T);
  std::thread t5(T);

  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();

  std::cout << "ull:   " << ull   << std::endl;
  std::cout << "ull_a: " << ull_a << std::endl;

}
