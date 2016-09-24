//2.12 : Practice whats the output

#include <iostream>
#include <cstring>

class String {

public: 
  String(int n = 0)
  :str(new char[n+1]) {
    str[0] = '\0';

    std::cout << "Defaut" << std::endl;
    std::cout << "length of str is " << strlen(str) << " and n is " << n << std::endl;
  }

  String(const char* s)
  : str(new char[strlen(s)+1]) {
    strcpy(str, s);

    std::cout << "Convert" << std::endl;
  }

  String(const String& sObj) 
  : str(new char[strlen(sObj.str)+1]) {
    strcpy(str, sObj.str);

    std::cout << "Copy" << std::endl;
  }

  String& operator=(const String& rhs){

    std::cout << "Assignment" << std::endl;
    if(this == &rhs)
      return *this;

    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
  }

  ~String() {
    delete [] str;

    std::cout << "Destructor" << std::endl;
  }

  const char* getVal() const {
    return str;
  }
  
private:
  char* str;
};

void copyCallTest(String* str) {
  std::cout << str->getVal() << std::endl;
}

int main() {

  String a("cat"), b = a;

  char* value = (char*)a.getVal();
  value[0] = 'M';

  std::cout << a.getVal()  << std::endl;


  //String* ptr = new String("dog");
//  String c = String("do hell with ur code");
//  String ptr1;
//  ptr1 = a;

  //String *val;
//  val = new String("whats happenning");
  //val = ptr;

//  copyCallTest(ptr);

//  delete ptr;
  return 0;
}

