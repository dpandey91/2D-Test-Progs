#include <iostream>

void test(int n, char*** val){

 for (int  i = 0; i < n; ++i) {
    std::cout << (*val)[i] << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << argc << std::endl;
  //for (int  i = 0; i < argc; ++i) {
 //   std::cout << argv[i] << std::endl;
//  }

  test(argc, &argv);
}
