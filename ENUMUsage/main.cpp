#include <iostream>

class A{
public:
    static float getPI(){ return PI;}
    
private:
    static const float PI;
    enum {ARRAY_MAX = 10};
    int numbers[ARRAY_MAX];
};

const float A::PI = 0.0;

int main(){
    std::cout << "PI: " << A::getPI() << std::endl;
    return 0;
}
