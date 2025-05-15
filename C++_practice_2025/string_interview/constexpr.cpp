#include <iostream>
using namespace std;

constexpr int add(int a, int b) { return a+b; }

int main() {
    // EXAMPLE 2
    int a , b;
    cin >> a >> b;
    cout << add(a, b) << endl;

    // EXAMPLE 1
    cout << add(1,2) << endl;
    return 0;
}