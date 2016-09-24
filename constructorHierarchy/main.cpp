#include <iostream>

class Person{

public:
    Person(std::string S) : name(S) {
        std::cout << "Person Constructor" << name << std::endl;
    }
    
    ~Person(){
        std::cout << "Person Destructor" << name << std::endl;
    }
    
protected:
    std::string name;
};


class Faculty: public Person{
    
public:
    Faculty(std::string n, float s) : Person(n), salary(s){
        std::cout << "Faculty Constructor" << name << std::endl;
    }
    
    ~Faculty(){
        std::cout << "Faculty Destructor" << name << std::endl;
    }
private:  
    float salary;
};

int main(){
    Faculty("Dipika", 100);
    Person* person = new Faculty("Sapna", 10);
    delete person;
}
