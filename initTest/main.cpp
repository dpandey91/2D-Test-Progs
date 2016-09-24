#include <iostream>
#include <cstring>
using std::cout; using std::endl;
class Student {
public:
Student() { cout << "default" << endl; }
Student(const char* n, int a) { cout << "convert" << endl; }
Student(const Student&) { cout << "copy" << endl; }
const char* getName() const { return name; }
int getAge() const { return age; }
Student& operator=(const Student& ) { cout << "assign" << endl; }
private:
char * name;
int age;
};
class Data {
public:
//Data(char *n, int a) {
//stu = Student(n, a);
//}

Data(char* n, int a):stu(Student(n, a)){}

private:
Student stu;
};
int main() {
Data("Abe Lincoln", 33);
}
