#include <iostream>

class B{

public:
    B(int n) : number(n+'0'){}
    
    char getNumber() const { return number; }
private:
    char number;   

};

class A{
public:
    A(int n) : b(new B(n)){}
    char getB() const {return b->getNumber();}
private:
    B* b;
};

int main(){
    A* a = new A(7);
    std::cout << a->getB() << std::endl;
}