#include <iostream>

class string{

public:
    string() {std::cout << "default" << std::endl;}
    string(const char*) {std::cout << "convert" << std::endl;}
    string(const string&) {std::cout << "copy" << std::endl;}
    ~string() {std::cout << "destructor" << std::endl;}
    
    string& operator=(const string& rhs){
        std::cout << "assign" << std::endl;
        return *this;
    }
};

class student{

public:
    student(const char* n){
        name = n;
    }

//    student(const char* n) : name(n){}
    
private:
    string name;
};

int main(){
    student* s = new student("Dipika");
    delete s;
}
