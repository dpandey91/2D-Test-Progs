#include <iostream>

class A {
public:
	A(const char*) { std::cout << "convert" << std::endl; }
	A(const A&) { std::cout << "copy" << std::endl; }
	~A()	{ std::cout << "destructor" << std::endl; }
	
	A& operator=(const A&) {
	std::cout << "assign" << std::endl;
	return *this;
	}
};

int main()
{
A *rope = new A("twisted");



//int q = 6;
//int *p = &q;
//std::cout << *p << std::endl;


}
