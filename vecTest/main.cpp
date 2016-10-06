#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
const unsigned MAX = 1000;
void initialize(vector<int>& vec) {
for (unsigned int i = 0; i < MAX; ++i) {
vec.push_back(i);
}
}

int main() {
vector<int> vec;
initialize(vec);
cout << vec.size() << " " << vec.capacity() << endl;
vec.push_back(99);
cout << vec.size() << " " << vec.capacity() << endl;
}
