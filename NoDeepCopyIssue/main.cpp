#include <iostream>

class Problems{
public:
    Problems(int n) : stuff(new int) { (*stuff) = n; }
    ~Problems(){ std::cout << "Des" << *stuff << std::endl; delete stuff; }
    int* getStuff() const { return stuff; }
    void setStuff(int n) { (*stuff) = n; }
    
private:
    int* stuff;
};

void printit(Problems& x){
    std::cout << (x.getStuff()) << std::endl;
}

int main(){
    Problems p(77), q(8);
//    q.setStuff(101);
    printit(p);
}
