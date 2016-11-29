#include <cstdlib>
#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
const unsigned int MAX = 10;

void initialize(vector<int>& vec) {
    for ( unsigned int i = 0; i < MAX; ++i ) {
        vec.push_back( rand() % 100 );
    }
}


void eliminate_all(vector<int>& vec, int n);

int main() {
    vector<int> vec;
    vec.reserve(MAX);
    initialize(vec);
    vec.push_back(35);
    //print(vec);
    eliminate_all(vec, 35);

}

void eliminate_all(vector<int>& vec, int n) {
    vector<int>::iterator ptr = vec.begin();
    while ( ptr != vec.end() ) {
        if ( *ptr == n ) {
            ptr = vec.erase(ptr);
        }
        else ++ptr;
    }
}
