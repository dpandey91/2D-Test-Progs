#include <iostream>
#include <cstring>

class string{

public:
    string(const char* b) : buf(new char[strlen(b)+1]){
        strcpy(buf, b);
    }
    
    const char& operator[](int index) const{
        std::cout << "const []" << std::endl;
        return buf[index];
    }
    
    char& operator[](int index) {
        std::cout << buf <<"non-const []" << std::endl;
        return buf[index];
    }
    
private:
    char* buf;
};

void display(const string& str){
    std::cout << "str: " << str[0] << std::endl;
}

int main(){
    const string s("cat");
    string t("cat");
    t[0] = 'b';
    std::cout << "t: " << t[0] << std::endl;
    display(t);
}