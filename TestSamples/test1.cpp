#include <iostream>
#include <cstring>

class Test{
public:

  Test(int x):a(x), b(a){
     std::cout << "a " << a << "b " << b << std::endl;
  }

private:
  int b;
  int a;
};


int main(){
  Test t1(5);
}
