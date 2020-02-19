/*
 * Hello World!!!   
 */
#include <iostream>
using namespace std; 

#define HELLO "Hello World!"

int main(int argc, char** argv) {
    cout << HELLO << endl;
    if (argc > 1) {
        cout << "Hello " << argv[1] << endl;
    }
    return 0;
}