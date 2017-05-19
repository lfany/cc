#include <iostream>
#include "Test.h"

int main() {
    using namespace std;
    cout << "Hello world!" << endl;

    Test* test = new Test();
    Test a{};
    cout << test->func(a.func(a.getTest())) << endl;
    delete[] test;
    return 0;
}