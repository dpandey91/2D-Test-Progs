#include <iostream>
#include <cstring>

class String {

public: 
  String(const char* s)
  : buf(new char[strlen(s)+1]) {
  
    strcpy(buf, s);
  }

  const char* getBuf() const {
    return buf;
  }


private:
  char* buf;
};


int main() {
 
  String s("Elysium");
  //strcpy(s.getBuf(), "stuff");

  char* c = (char*)s.getBuf();

//  char* c = s.getBuf();

  c[0] = 'M';

 std::cout << s.getBuf() << std::endl;

 return 0;
}
